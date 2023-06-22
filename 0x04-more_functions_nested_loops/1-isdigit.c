#include "main.h"
/**
 * _isdigit - Description: Checks for numbers 0-9
 * Return: 1 if a digit, 0 if otherwise
 * @c: Parameter
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
