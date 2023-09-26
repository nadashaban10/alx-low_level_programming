#include "lists.h"
/**
 *sum_listint - sum nodes
 *@head: head pointer
 *Return: sum
 */

int sum_listint(listint_t *head) 
{
	int sum = 0;

	/* Traverse the list and add data value to the sum */
	while (head != NULL)
	{
		sum += head->n;    /* Add the data (n) of the current node to the sum*/
		head = head->next; /*Move to the next node in the list*/
	}

	return (sum);
}
