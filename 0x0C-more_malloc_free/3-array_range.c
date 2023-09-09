#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers
*@min: min value
*@max: max value reches
*Return: ptr*
*/
int *array_range(int min, int max)
{
	int *ptr;
	int size;
	int i;

	/*first con Return NULL if min > max*/
	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));

	/*sec condition ,if malloc fails*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		/* 3shan nhot paa value i in pointer */
		ptr[i] = min + i;
	}
	return (ptr);
}
