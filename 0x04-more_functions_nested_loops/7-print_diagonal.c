#include "main.h"

/**
*print_diagonal  - print diagonal
*@n : The number to check
*/

void print_diagonal(int n)
{
	int h, b;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (h = 1; h <= n; h++)
	{
	for (b = 1; b <= n; b++)
	{
	if ((h + b) <= n)
	_putchar(' ');
	else
	_putchar(92);
	}
	_putchar('\n');
}
}
}
