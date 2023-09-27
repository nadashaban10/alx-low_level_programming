#include "lists.h"
/**
 *sum_listint - sum nodes
 *@head: head pointer
 *Return: sum
 */

int sum_listint(listint_t *head) 
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the list and add data value to the sum */
	while (current != NULL)
	{
		sum += current->n;    /* Add the data (n) of the current node to the sum*/
		current = current->next; /*Move to the next node in the list*/
	}

	return (sum);
}
