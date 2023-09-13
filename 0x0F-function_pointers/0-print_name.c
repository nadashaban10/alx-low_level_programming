#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print name
 *@name:the func value we print
 *@f:the func we called
 */
void print_name(char *name, void (*f)(char *))
{
    /* you just have to Call the function "name" by "f"*/
	f(name);
}
