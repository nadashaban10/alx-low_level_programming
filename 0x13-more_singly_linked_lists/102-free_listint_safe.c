#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to a pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	listint_t *current = *h;
	size_t count;

	count = 0;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		count++;
		current = temp;
	}
	*h = NULL;
	return (count);
}
