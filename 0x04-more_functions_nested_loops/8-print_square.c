#include "main.h"


/**
*print_square - print # of the number.
*@size: The number to print
* var row and colomn for loop
*/

void print_square(int size)
{
	int row, colomn;

	if (size <= 0)
	_putchar('\n');
	else
	for (row = 1; row <= size; row++)
	{
	for (colomn = 1; colomn <= size; colomn++)
	_putchar('#');
	_putchar('\n');
	}

}
