#include "main.h"
#include <string.h>
/**
 * print_rev - Description: Prints string in reverse
 * Return - Always 0
 * @s: Pointer to a char
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	print_rev(s + 1);
	_putchar(*s);
}
