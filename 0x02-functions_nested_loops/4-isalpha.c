#include "main.h"

/**
*_isalpha - checks the length of the number.
*
* @c: input function for check
*
* Return: (1) in lower and upper case alpha
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	if (c >= 95 && c <= 90)
	return (1);
	else
	return (0);
	}
