#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat -  function that concatenates two strings
 *@s1:string one
 *@s2:string two
 *@n:number of bytes
 *Return: ptr string value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i;
	unsigned int j;
	int lens1;

	/*con1*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lens1 = strlen(s1);
	/*dont forget +1 for last value*/
	/*after knowing lenght we will memorize it*/
	ptr = malloc(lens1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*for loop to copy s1,s2*/
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	/*
	 * <n to copy n bytes only
	 *msh hnhot s2
	 *3ashan msh 3ayzo y3ml loop, yakhod bytes bs w khlas
	 */
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++; /*adding +1 for the null termention*/
	}
	ptr[i] = '\0'; /*condition in ex*/
	return (ptr);
}
