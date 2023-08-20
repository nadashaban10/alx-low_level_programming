#include "main.h"


/**
*_isdigit  - checks the digit number.
*@c: The number to check
*Return: (1) for digits
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
