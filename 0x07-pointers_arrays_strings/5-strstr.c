#include "main.h"
/**
 *_strstr -  function that locates a substring.
 *@haystack: search in
 *@needle: search for
 *Return: (0 for null or p for values)
 */
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	char *p;

	if (*needle == 0)
		return (haystack);
	while (needle[i] != '\0')
		i++;

	while (*haystack != '\0')
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[j] == haystack[j])
			{
				p = (needle);
				return (p);
			}
		}
		haystack++;
	}

	return (0);
}

