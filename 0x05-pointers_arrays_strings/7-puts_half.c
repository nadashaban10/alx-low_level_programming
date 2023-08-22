#include "main.h"


/**
*puts_half - print sec half of content
* the pointer points sec half
* @str: pointer to the print variable
*/



void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

