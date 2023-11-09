#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h) /*or while(h != null) */
	{
		n++;
		h = h->next;
	}
	return (n);
}
/**
 * another way
 * declare a temp pointer to equal head 
 * and access the whole ele
 * in this case the counter will start from 1 not zero becuase we allready has a index of head by temp
 * while will continue till next pointer = null 
 */
