#include "main.h"

/**
 * main - Prints  _putchar as a message.
 *
 *
 * Return: Always 0 (Success)
 */




int main(void)
{
	char str[] = "_putchar";
	int c;

	for (c =  0; c < 8; c++)
	_putchar(str[c]);
	_putchar('\n')
	return (0);
}
