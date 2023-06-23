#include "main.h"
/**
 * print_triangle - Description: Prints a triangle
 * Return: Always 0
 * @size: Parameter
 */
void print_triangle(int size)
{
	int c = 0, i, j;

	i = size - 1;

	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}
	if (size <= 0)
		_putchar('\n');
}

