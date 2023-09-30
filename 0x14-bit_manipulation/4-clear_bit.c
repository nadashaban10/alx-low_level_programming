#include "main.h"
/**
 *clear_bit - function that clear  the value
 *@n: long int
 *@index: index of num
 *Return: number of
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{

	return (-1);
	}

	mask = 1UL << index;
	*n &= ~mask; /**n = n & ~mask*/
	return (1);
}
