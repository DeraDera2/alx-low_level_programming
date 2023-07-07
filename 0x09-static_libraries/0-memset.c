#include "main.h"
/**
 * _memset - Description: Fills the memory with a constant byte
 * @s: Memory to be filled
 * @b: constant byte
 * @n: Number of bytes to fill
 * Return: The updated memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
