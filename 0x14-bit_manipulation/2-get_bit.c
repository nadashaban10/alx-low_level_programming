#include "main.h"
/**
 *get_bit - function that returns the value of a bit
 *@n: long int
 *@index: index of num
 *Return: number of
 */


int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{

		return (-1);
	}

	 mask = 1UL << index; 	/*bit = (n >> index) & i*/
	 	/*return(bit)*/
	return ((n & mask) ? 1 : 0);
}
