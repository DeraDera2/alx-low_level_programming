#include "main.h"
/**
 * _strncpy - Description: Copies a string
 * Return: A string
 * @dest: Destination atring
 * @src: Source string
 * @n: Number of characters to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
