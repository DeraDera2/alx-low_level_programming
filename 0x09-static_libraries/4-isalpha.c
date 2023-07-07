#include "main.h"
/**
 * _isalpha - Description: Checks for alphabetic characters
 * Return: 1 if alphabets and 0 if otherwise
 * @c: parameter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
