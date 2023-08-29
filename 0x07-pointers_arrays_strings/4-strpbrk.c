#include "main.h"

/**
 *_strpbrk - function that searches a string for any of a set of byte
 *
 *@s: sring whitch search in
 *@accept: we locate for
 *Return: (&s[i])
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		s++;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])

			return (s);
		}
	
	}

	return (NULL);
}
