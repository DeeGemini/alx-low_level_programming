#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>
#include <errno.h>

/**
 * print_error - Prints an error message and exits with status code 98
 *
 * @param message The error message to display
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header - Prints the information contained in the ELF header
 *
 * @param elf_header The ELF header to display
 */
void print_elf_header(Elf64_Ehdr elf_header)
{
	printf("Magic:   ");

	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");

	printf("Class:   %d-bit\n", elf_header.e_ident[EI_CLASS] ==
	ELFCLASS32 ? 32 : 64);

	printf("Data:    %s\n", elf_header.e_ident[EI_DATA] ==
	ELFDATA2LSB ? "2's complement, little endian" : "unknown");

	printf("Version: %d (current)\n", elf_header.e_ident[EI_VERSION]);

	printf("OS/ABI:  %s\n", elf_header.e_ident[EI_OSABI] ==
	ELFOSABI_SYSV ? "UNIX - System V" : "unknown");

	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);

	printf("Type:    %s\n", elf_header.e_type == ET_EXEC ?
	"EXEC (Executable file)" :
	(elf_header.e_type == ET_DYN ? "DYN (Shared object file)" :
	(elf_header.e_type == ET_REL ? "REL (Relocatable file)" : "unknown")));

	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);
}

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open the file");
	}

	Elf64_Ehdr elf_header;
	ssize_t num_bytes = read(fd, &elf_header, sizeof(Elf64_Ehdr));

	if (num_bytes != sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read ELF header");
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
	}

	print_elf_header(elf_header);
	close(fd);
	return (0);
}
