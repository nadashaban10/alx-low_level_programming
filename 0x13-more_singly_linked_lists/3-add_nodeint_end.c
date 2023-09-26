#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end
 *@head: pointer head to access
 *@n: integer value added
 *Return: new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	/*
	 *Set the next pointer of the new node to
	 *NULL since it will be the last node
	 */
	new->next = NULL;

	/*if con when list is empty!*/
	if (*head == NULL)
	{
		*head = new;
	}
	/*new node will be the head of list*/
	else /*lets find the last node in list*/
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
