#include "main.h"
#include <string.h>
/**
 * _strncat - Description: Concatenates two strings with at most n bytes
 * @dest: Destination string
 * Return: pointer to dest
 * @src: Source string
 * @n: Maximum number of bytes of src
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	char *ptr = dest;

	return (ptr);
}
