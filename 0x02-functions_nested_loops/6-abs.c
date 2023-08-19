#include "main.h"
#include <stdio.h>


/**
*_abs - absulote the sign value of  number.
*@n: The number to check
*Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
	n = (-1) * n;
	return (n);
}
