#include "main.h"
/**
 *set_bit - get bits
 *@n: numbers
 *@index: index
 *Return: values
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{

		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
