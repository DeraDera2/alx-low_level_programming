#include "main.h"
/**
 * print_rev - Description: Prints string in reverse
 * Return - Always 0
 * @s: Pointer to a char
 */
void print_rev(char *s)
{
	print_rev(s + 1);
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
