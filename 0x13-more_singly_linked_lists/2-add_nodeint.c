#include "lists.h"
/**
 *add_nodeint - add node to the beginig
 *@n: new node value
 * @head: head pointer
 *Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head || new == NULL)
		return (NULL);
	new->next = NULL;

	new->n = n;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
