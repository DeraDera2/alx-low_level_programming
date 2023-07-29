#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0. 1 if no digits
 */
int main(int argc, char *argv[])
{
	int i;
	long sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%ld\n", sum);
	return (0);
}
