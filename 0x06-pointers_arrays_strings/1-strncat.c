#include "main.h"

/**
*_strncat - function that concatenates two strings.
* the pointers stored a string value
*@dest: pointer to the print variable
*@src: pointer to print
*@n: for defined number of elements
*Return: _strcat (dest) resulting string
*/

char *_strncat(char *dest, char *src, int n)

{
	int x = 0;
	int y;

	while (dest[x])
	x++;
	for (y = 0; y < n && src[n] != '\0'; y++)

	/* y<n instead of y= (n-1)*/

	dest[x + y] = src[y];

	/* b3d ma yzwad x ybda2 ywzd el y paa eli hya daymn <n */

	dest[x + y] = '\0';
	return (dest);
}
