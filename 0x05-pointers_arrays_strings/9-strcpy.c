#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = -1; src[i]; i++)
	{
	while (src[i] != '\0')
	dest[i] = src[i];
	}
	return (dest);
}
