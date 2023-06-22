#include "main.h"
/**
 * more_numbers - Description: Prints 1-14 ten times
 * Return - Always void
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
