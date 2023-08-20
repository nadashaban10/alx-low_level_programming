#include "main.h"

/**
*print_triangle  - print triangle
*@size : The number to check
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
	_putchar('\n');
	else
	{
	for (h = 1; h <= size; h++)
	{
	for (b = 1; b <= size; b++)
	{
	if ((h + b) <= size)
	_putchar(' ');
	else
	_putchar('#');
	}
	_putchar('\n');
}
}
}
