#include "main.h"
/**
 * _islower - Description: Tells whether an alphabet is lowercase
 *
 * Return: 0 if uppercase or 1 if lowercase
 * @c: parameter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
