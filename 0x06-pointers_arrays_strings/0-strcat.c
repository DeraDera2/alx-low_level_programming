#include "main.h"
#include <string.h>

/**
 * _strcat - Description: Concatenates two string
 * Return: Dest
 * @dest: Destination string
 * @src: Source string
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;
	char *ptr = dest;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (ptr);
}
