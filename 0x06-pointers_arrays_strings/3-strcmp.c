#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return:  0< if s1 < s2, >0 if s1 > s2, 0 if s1 == s2 
 */

int _strcmp(char *s1, char *s2)
{
	int total = 0;
	{
	while (*s1)
{
	if ( *s1 != *s2)
	total = ((int)*s1 - 48) - ((int)*s2 - 48);
	break; 
}
	s1++;
	s2++;
	}
	return (total);
}


/**int _strcmp(char *s1, char *s2)
*{
*	while (*s1 == *s2)
*	{
*	if (*s1 == '\0')
*	{
*	return (0);
*	}
*	s1++;
*	s2++;
*	}
*	return (*s1 - *s2);
*	}
*/

