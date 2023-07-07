#include "main.h"
/**
 * _memcpy - Description: Copies n bytes from src to dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes
 * Return: Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n, k = 0;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
