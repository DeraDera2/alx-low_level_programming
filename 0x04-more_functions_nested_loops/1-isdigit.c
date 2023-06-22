#include "main.h"
/**
 * _isdigit - Description: Checks for numbers 0-9
 * Return: 1 if a digit, 0 if otherwise
 * @t: Parameter
 */
int _isdigit(int t)
{
	if (t >= 0 && t <= 9)
		return (1);
	else
		return (0);
}
