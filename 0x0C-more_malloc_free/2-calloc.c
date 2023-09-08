#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_calloc - function allocates memory for an array using malloc
*@nmemb:size of array element
*@size:size byts
*Return:ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = (char *)malloc(nmemb * size);
	 /**
	  * if (nmemb || size == 0)
	*{
	*return (NULL);
	*}
	*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
