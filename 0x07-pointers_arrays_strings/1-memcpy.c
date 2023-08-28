#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: memory to copied in
 *@src: memory to copy from
 *@n: bytes from memory area
 *Return: (dest)
 */



char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <=  n; i++)
	{

		dest[i] = src[i];
	}
	return (dest);
}
