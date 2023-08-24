#include "main.h"

/**
*_strcat - function that concatenates two strings.
* the pointers stored a string value
* @dest: pointer to the print variable
*@src: pointer to print
*return: (dest) appendding src
*/

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y;

	while (dest[x])
	x++;
	for (y = 0; src[y]; y++)
	dest[x++] = src[y];
	return (dest);
	_putchar('\0');
}
