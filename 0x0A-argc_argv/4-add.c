#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string only contains digits
 * @str: String to check
 *
 * Return: 1 if the string contains only digits, otherwise 0
 */

int check_num(const char *str)
{
	size_t i;
	size_t len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Adds positive numbers
 * @argc: Count of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			int num = atoi(argv[i]);

			sum += num;
		}
	else
	{
		printf("Error\n");
		return (1);
	}
	}

	printf("%d\n", sum);
	return (0);
}
