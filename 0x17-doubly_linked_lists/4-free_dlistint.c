#include "lists.h"
/**
 * free_dlistint - free memory
 * head: haed of nodes
 * Return: values
 */
void free_dlistint(dlistint_t *head)

{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}

	head = (NULL);
}
