#include "main.h"
/**
*cap_string - function that capitalizes all words of a string.
*@s: string to modify
*Return: the resulting string
*/


char *cap_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
	while (!(s[index] >= 'a' && s[index] <= 'z'))
		index++;
	if (s[index - 1] == ',' ||
	s[index - 1] == ';' ||
	s[index - 1] == '\n' ||
	s[index - 1] == '.' ||
	s[index - 1] == '!' ||
	s[index - 1] == '?' ||
	s[index - 1] == '"' ||
	s[index - 1] == ')' ||
	s[index - 1] == '(' ||
	s[index - 1] == '}' ||
	s[index - 1] == '{' ||
	s[index - 1] == ' ' ||
	s[index - 1] == '\t' ||
	index == 0)
	s[index] -= 32;
	index++;
	}
	return (s);
}
