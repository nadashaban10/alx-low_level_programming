#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - print all element of linked list.
 *@h: pointer to head and using to access the str
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
        size_t nodes = 0;

        while (h != NULL)
        {
        if (h->str == NULL)
                printf("[0] (nill)\n");
        else
                printf("[%d] %s\n", h->len, h->str);
                        /*here we have to add len snd str var in structure*/
        nodes++;        /*this iterate to cound the nodes number */
        h = h->next;    /*h will equal the value of next move and so on..*/
                        /*this move ptr in struct to access*/
        }
return (nodes);
}

