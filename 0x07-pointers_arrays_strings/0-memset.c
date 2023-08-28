#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: the memory area pointed
 *@n: number of bytes
 *@b: constant byte
 *Return: s[i] = b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
