#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *current;
	size_t count;
	const listint_t *visited_nodes[1024]; /*max nodes*/


	current = head;
	count = 0;
	while (current != NULL)
	{
		/* Check if the current node is already in the visited_nodes array */
		for (i = 0; i < count; i++)
		{
			if (current == visited_nodes[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
		}

		/* If not visited, print the node and add it to the visited_nodes array */
		visited_nodes[count] = current;
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (count);
}
