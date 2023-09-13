#include <stdio.h>
/**
 *int_index - Function to search for an integer in an array
 *@array: input array
 *@size: size element of array
 *@cmp: calling func
 *Return: int value in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/*first condition*/
	if (size <= 0)
	{
		return (-1);

	}
	/*
	 * making for loop on the each element of array
	 *  to search for int value only
	 */

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
	/*tol m index el array elvalue bat3to msh b 0 htrg3 el value*/
	return (i);
	}
	}
	/*If no element matches, return -1*/
	return (-1);
}
