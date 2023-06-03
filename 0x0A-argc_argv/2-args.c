#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc <= 1)
	{
		printf("No arguments provided.\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
