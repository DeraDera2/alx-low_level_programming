#include "main.h"
/**
 * _isupper - Description: Checks for uppercase alphabets
 * Return: 1 if uppercase, 0 if otherwise
 * @c: Parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
