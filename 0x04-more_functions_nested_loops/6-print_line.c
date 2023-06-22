#include "main.h"
/**
 * print_line - Description: prints a straight line
 * Return - Always 0
 * @n: parameter
 */
void print_line(int n);
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
