#include "main.h"


/**
*reverse_array: reverse an array of integers.
*@a: array to be reversed
*@n: input number of element array
*/

void reverse_array(int *a, int n)
{
	int y;
	int i;
	int t;

	for (i = 0, y = (n - 1); i < y; i++, y--)
	{
	t = a[i];
	a[i] = a[y];
	a[y] = t;
	}
}
