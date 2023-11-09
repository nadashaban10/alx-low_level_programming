#include "lists.h"
<<<<<<< HEAD

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
=======
/**
 *free_dlistint  - free memory
 *
 * @h: head of the list
 */
void free_dlistint(dlistint_t *head)

{
	dlistint_t *tmp;

	while (head != NULL) 
{
		tmp = head;
>>>>>>> 43bd807ae97282223f88109c598ce4b9bb9000ab
		head = head->next;
		free(tmp);
	}
}
