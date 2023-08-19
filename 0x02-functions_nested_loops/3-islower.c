#include "main.h"

/**
* _islower(int c) - checks lower case charcter with 1 return value.
*@c: input check of function
 *Return: 1 (if c is lower case) 0 (else)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
	return (0);
}
