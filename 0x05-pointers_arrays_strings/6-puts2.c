#include "main.h"
/**
 * puts2 -  Description: Prints even numbers of a string
 * Return - Always 0
 * @str: Pointer to a char
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
