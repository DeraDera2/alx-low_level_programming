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
			printf("%d", n);

			if (n == 98)
				continue;
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}
