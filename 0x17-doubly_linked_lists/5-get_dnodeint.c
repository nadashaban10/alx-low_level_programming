#include "lists.h"

<<<<<<< HEAD
/**
 * get_dnodeint_at_index - get node with index
=======
/*
 * get_dnodeint_at_index: get node with index
>>>>>>> 43bd807ae97282223f88109c598ce4b9bb9000ab
 *
 * @head: head of the list
 * @: index needed
 * Return: node of index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

<<<<<<< HEAD
	while (node != NULL && i < index)
=======
	while (node != NULL && i < index) 
>>>>>>> 43bd807ae97282223f88109c598ce4b9bb9000ab
	{
		node = node->next;
		i++;
	}

	return (node);
}
