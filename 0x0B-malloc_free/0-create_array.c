#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*create_array - function that creates an array with spc char
*@size: size of array
*@c: specifycharacter
*Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
