#include "main.h"
/**
 * print_diagonal - Description: Prints a diagonal line
 * @n: parameter
 * Return - Always 0
 */
void print_diagonal(int n)
{
	int c = 0, i;

	while (n > 0)
	{
		i = c;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < i)
	{
		_putchar('\n');
	}
}
