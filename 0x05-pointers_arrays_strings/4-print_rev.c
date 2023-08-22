#include "main.h"

/**
*print_rev - prints a string to stdout
*@s: pointer to the string to print
*/
void print_rev(char *s)
{
	int i;

	while (s[i])
	i++;
	while (s[i])
	i--;
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
