#include "lists.h"
/**
 *
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return new_node;
	}

	dlistint_t *current = *h;
	for (unsigned int i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
