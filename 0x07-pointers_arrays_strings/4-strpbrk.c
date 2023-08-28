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
	int i;
	int j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				p = &s[i];
			return (p);
		}
	}
	return (0);
}
