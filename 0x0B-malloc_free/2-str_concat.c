#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: *result value or NULL
 */
char *str_concat(char *s1, char *s2)
{

	int ln1;
	int ln2;
	char *result;

	/*Treat NULL strings as empty strings*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/*Calculate the lengths of the two input strings*/
	ln1 = strlen(s1);
	ln2 = strlen(s2);
	/**
	 *Allocate memory for the concatenated string
	 *including space(+1) for the null terminator
	 */
	result = (char *)malloc((ln1 + ln2 + 1) * sizeof(char));

	if (result != NULL)
	{
		/*Copy the contents of s1 and s2 into the result*/
		strcpy(result, s1);
		strcat(result, s2);
	}

	return (result);
}


