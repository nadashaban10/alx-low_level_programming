#include "lists.h"
/**
 *free_listint - free function
 *@head: haed pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
