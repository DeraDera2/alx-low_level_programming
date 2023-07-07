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
	int len1, i;

	len1 = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';
	return (dest);
}
