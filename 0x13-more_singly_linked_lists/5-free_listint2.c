#include "lists.h"
/**
 *free_listint2 - free function
 *@head: access pointer
 */
void free_listint2(listint_t **head)
{
listint_t *current;

while (head != NULL)
{
	current = *head;
	*head = (*head)->next; /* to avoid the refrence*/
	free(current);
}
}
