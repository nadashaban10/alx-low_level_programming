#include "main.h"
/**
*print_alphabet_x10  - print alphabet 10times
*return: 0 (success)
*/

void print_alphabet_x10(void)
{
	int x;
	int y;

	for(x = 0; x < 10; x++)
	{
	for(y = 97; y <=122; y++)
	_putchar(y);
	_putchar('\n');
	}
}
