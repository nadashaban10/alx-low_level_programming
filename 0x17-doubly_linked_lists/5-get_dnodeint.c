#include "lists.h"

/**
 * get_dnodeint_at_index - get node with index
 *
 * @head: head of the list
 * @: index needed
 * Return: node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	return (node);
}
