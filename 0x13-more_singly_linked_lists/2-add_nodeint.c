#include "lists.h"
/**
 *add_nodeint - add node to the beginig
 *@n: new node value
 * @head: head pointer
 *Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

/*check con for memory allocation*/
	listint_t *new = malloc(sizeof(listint_t));
/*return null if memory failed*/
	if (new == NULL)
	{
		return (NULL);
	}	
/*set the value of new node , provided value*/
	new->n = n;
 /* Set the next pointer of the new node to the current head of the list */
	new->next = *head;
/*update head of list to new*/
	*head = new;
/* Return the address of the new element */
	return (new);
}
