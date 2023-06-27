#include "main.h"
#include <string.h>
/**
 * rev_string - Description: reverses a string
 * return - Always 0
 * @s: pointer to a char
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

