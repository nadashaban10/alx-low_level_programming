#include "main.h"

/**
*_strncpy - function that copies a string.
* the pointers stored a string value
*@dest: pointer to the print variable
*@src: pointer to print
*@n: for defined number of elements
*Return: _strcat (dest) resulting string
*/

char *_strncpy(char *dest, char *src, int n)

{
        int x = 0;
        int y;

        while (dest[x])
        x++;
        for (y = 0; y < n; y++)
	src++;

        dest[x] = src[y];

        dest[x] = '\0';
        return (dest);
        _putchar('\n');
}
