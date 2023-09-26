#include "lists.h"
/**
 *insert_nodeint_at_index - add nodes
 *@idx: index
 *@n: num provided
 *@head: head pointer
 *Return: values
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current = *head;
	unsigned int i;

	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	/*
	 * Handle the case where
	 *the new node should be inserted at the beginning (index 0)
	 */
	if (idx == 0)
	{
		new->next = *head;
		*head = (new);
		return (new);
	}
	/* Traverse the list to find the node before the desired position */
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	/* Check if the index is out of bounds */
	if (i < idx - 1)
	{
		free(new);
		return (NULL);
	}
	/* Insert the new node into the list */
	new->next = current->next;
	current->next = new;

	return (new);
}
