#include "main.h"
/**
 * print_rev - Description: prints a string in reverse
 * Return - Always 0
 * @s: Pointer to a char
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
