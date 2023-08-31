#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion -  function that returns the factorial of a given number.
 *@y: input power num of x
 *@x: input number
 *Return: (1)
 */


int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y < 0)
	{
		return (-1);
	}

	return (1);
}
