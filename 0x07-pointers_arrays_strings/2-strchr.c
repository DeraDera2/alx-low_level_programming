#include "main.h"
/**
 * _strchr - Description: Locates a character in a string
 * @s: String to be searched
 * @c: Character to be located
 * Return: Pointer to the first occurrence of c, else NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
