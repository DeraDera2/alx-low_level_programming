#include "main.h"
/**
 * print_line - Description: prints a straight line
 * Return - Always 0
 * @n: parameter
 */
void print_line(int n);
{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
