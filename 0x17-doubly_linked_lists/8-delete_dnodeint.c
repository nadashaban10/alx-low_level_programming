#include "lists.h"
/**
 *delete_dnodeint_at_index - delete function
 *@head: headofndes
 *@index: index node
 *Return: reaturn value
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) 
{
	unsigned int i;

	if (*head == NULL) 
	{
		return (-1);
	}

	if (index == 0) 
	{
		*head = (*head)->next;
		if (*head != NULL) 
		{
			(*head)->prev = NULL;
		}
		return (1);
	}

	dlistint_t *current = *head;

	for (i = 0; i < index - 1; i++) 
	{
		if (current->next == NULL) 
		{
			return (-1);
		}
		current = current->next;
	}

	dlistint_t *node_to_delete = current->next;
	if (node_to_delete == NULL)
	{
		return (-1);
	}

	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL) 
	{
		node_to_delete->next->prev = current;
	}

	free(node_to_delete);

	return (1);
}
