#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, result;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 0; i < num_coins && num > 0; i++)
	{
		result += num / coins[i];
		num %= coins[i];
	}

	printf("%d\n", result);
	return (0);
}
