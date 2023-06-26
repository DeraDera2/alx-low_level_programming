#include "main.h"
/**
 * swap_int - Description: Swaps two integers
 * Return - Always 0.
 * @a: pointer to an int
 * @b: pointer to an int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
