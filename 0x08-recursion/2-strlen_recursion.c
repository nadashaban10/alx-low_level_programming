#include "main.h"
#include "unistd.h"
#include <stdio.h>
/**
 *_strlen_recursion - function return length
 *@s: input string
 *Return: (x) length of string
 */



int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s != '\0')
	{
		x = _strlen_recursion(s + 1) + 1;

	}
	return (x);
}
