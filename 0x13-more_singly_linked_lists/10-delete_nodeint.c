#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to delete (starting from 0)
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous = NULL;
	unsigned int count = 0;

	current = *head;

	if (head == NULL || *head == NULL)
		return (-1);


	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
		*head = current->next;
	else

		previous->next = current->next;
	free(current);
	return (1);
}
