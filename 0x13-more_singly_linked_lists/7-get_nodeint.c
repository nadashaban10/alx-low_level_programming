#include "lists.h"
/**
 *get_nodeint_at_index - get index
 *@head: head pointer
 *@index: index of elemwnt
 *Return: null or index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int count = 0;

	current_node = head;
	while (current_node != NULL)
	{

		if (count == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
