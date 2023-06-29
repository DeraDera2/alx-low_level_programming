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
	int len1 = 0;

	while (dest[len1] != '\0')
		len++;
	int i = 0;

	while (src[i] != '\0' && n > 0)
	{
		dest[len1] = src[i];
		len1++;
		i++;
		n--;
	}
	char *ptr = dest;

	return (ptr);
}
