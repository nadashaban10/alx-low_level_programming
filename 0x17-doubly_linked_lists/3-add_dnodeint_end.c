#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
<<<<<<< HEAD

{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	dlistint_t *current_node = *head;

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	new_node->next = NULL;
	current_node->next = new_node;
	new_node->prev = current_node;

	return (new_node);
=======
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
>>>>>>> 43bd807ae97282223f88109c598ce4b9bb9000ab
}
