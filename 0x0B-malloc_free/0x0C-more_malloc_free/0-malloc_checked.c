#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*/
void *malloc_checked(unsigned int b)
{
char *ptr;

ptr = (char*)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
