#include "lists.h"
/**
 *listint_len - linked list
 *@h: head pointer
 *Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
	h = h->next;
	i++;
}
return (i);
}
