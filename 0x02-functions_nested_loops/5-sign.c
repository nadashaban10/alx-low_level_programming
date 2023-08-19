#include "main.h"

/**
*print_sign - check sign of the number.
*@n: The number input to check
*Return:'+'(if the num >0) , '-' (if num<0) and 0 (if zero )
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else {
	_putchar(48);
	return (0);
	}
}
