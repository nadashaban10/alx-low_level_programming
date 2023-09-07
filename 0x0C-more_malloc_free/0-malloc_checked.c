#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - function that allocates memory using malloc
*@b: input int
*Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = (char *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
