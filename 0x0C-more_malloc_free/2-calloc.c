#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*_calloc - function allocates memory for an array using malloc
*@nmemb: size of array element
*@size: size in bytes of each element
*Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check if either nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Attempt to allocate memory */
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Initialize zero v to all in memory */
	/*
	 * also we can use loop to set 0 to all elements
	 *for (i=0; i< nmemb * size; i++)
	 *ptr[i]=0
	 */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
