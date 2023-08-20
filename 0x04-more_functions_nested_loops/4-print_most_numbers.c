#include "main.h"



/**
*print_most_numbers - print numbers from 0 to 9 using _putchar expect 2&4
*@c input with value
*Return: 0 always (success)
*/

void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	if (c == 2 || c == 4)
	continue;
	_putchar(c + 48);
	}
	_putchar('\n');
}
