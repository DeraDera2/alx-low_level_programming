#include "main.h"
#include <string.h>
/**
 * print_rev - Description: Prints string in reverse
 * Return - Always 0
 * @s: Pointer to a char
 */
void print_rev(char *s)
{
	int i, length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i);
	}
	_putchar('\n');
}
