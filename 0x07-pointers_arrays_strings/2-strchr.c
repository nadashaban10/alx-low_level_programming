#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@c: char which locat in
 *@s: string scanned
 *Return: (s or NULL)
 **/


char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] < '\0'; i++)
	{
	if (s[i] == c)
	{
	return (s + i);
	}
	}
	return ('\0');
}
