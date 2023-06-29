#include "main.h"
/**
 * reverse_array - Description: Reverses the elements of an array
 * @a: Array
 * @n: Numberof elements in the areay
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
