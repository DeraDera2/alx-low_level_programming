#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Multiplies two integers
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0. 1 if no two arguments
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
