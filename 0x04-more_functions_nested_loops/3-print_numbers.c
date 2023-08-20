#include "main.h"



/**
*print_numbers - print numbers from 0 to 9 using _putchar funtcion
*Return: 0 always (success)
*/

void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
{
	_putchar (c + 48);
	_putchar('\n');
	c++;
}
}
