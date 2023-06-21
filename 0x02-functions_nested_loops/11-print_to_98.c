#include "main.h"

/**
 * print_to_98 - Description: Prints to 98 and back
 * Return - void
 * @n: parameter
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar('\n');
			}
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			if (n != 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar('\n');
			}
		}
	}
}
