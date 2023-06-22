#include "main.h"
/**
 * print_square - Description: Prints a square
 * @size: Parameter
 * Return - Always 0
 */
void print_square(int size)
{
	int a, b = 0;

	if (size < 1)
		_putchar('\n);
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		y++;
	}
}
