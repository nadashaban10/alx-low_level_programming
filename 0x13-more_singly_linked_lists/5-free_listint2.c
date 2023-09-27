#include "lists.h"
/**
 *free_listint2 - free function
 *@head: access pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current =  (*head)->next; /* to avoid the refrence*/
		free(*head);
		*head = current;
	}
	*head = NULL;
}
