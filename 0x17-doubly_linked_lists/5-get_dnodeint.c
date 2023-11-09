#include "lists.h"
/**
 *get_dnodeint_at_index - get node
 *@head: head of nodes
 *index: index node
 *Return: nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index) 
	{
		current = current->next;
		i++;
	}

	if (i == index) 
	{
		return (current);
	}
	else 
	{
		return (NULL);
	}
}
