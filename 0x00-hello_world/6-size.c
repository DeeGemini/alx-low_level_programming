#include <stdio.h>

/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu bytes\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu bytes\n", (unsigned long)sizeof(int));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(long long int));
printf("Size of float: %lu bytes\n", (unsigned long)sizeof(float));
return (0);
}
