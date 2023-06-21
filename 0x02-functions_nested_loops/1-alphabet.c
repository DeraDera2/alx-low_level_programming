#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/*Function prototype*/
void print_alphabet(void);
int _putchar(char c);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 * Return - Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
/**
 * _putchar - prints
 *
 */
int _putchar(char c)
{
	return (putchar(c));
}
