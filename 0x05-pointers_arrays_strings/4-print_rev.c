#include "main.h"

/**
*print_rev - prints a string to stdout
*@s: pointer to the string to print
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		i--;
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
