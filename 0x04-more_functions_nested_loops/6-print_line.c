#include "main.h"
/**
 * print_line - Description: prints a straight line
 * Return - Always 0
 * @n: parameter
 */
void print_line(int n);
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
