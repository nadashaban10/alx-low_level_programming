#include <stdio.h>
#include "main.h"
#include "unistd.h"

/**
 *_print_rev_recursion - funtcion print strings
 *@s: input string
 */

void _print_rev_recursion(char *s)

{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
