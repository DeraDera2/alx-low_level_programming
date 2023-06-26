#include "main.h"
/**
 * _puts - Description: Prints a string followed by a new line
 * Return - Always 0.
 * @str: pointer to an char
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
