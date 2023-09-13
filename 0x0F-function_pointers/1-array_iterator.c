#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - function executes a function given as a parameter
 *@array: value printed
 *@size: size of element array
 *@action: func we called by
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	/**
	 *size_t is a data type in C that represents the size of objects.
	 * It is an unsigned integer type and is typically
	 * used for indexing and sizing memory objects
	 */

	for (i = 0; i < size ; i++)
	{
		/*
		 * here we call the action function to
		 * to call the adds value of array using loop
		 */
		action(array[i]);
	}
}
