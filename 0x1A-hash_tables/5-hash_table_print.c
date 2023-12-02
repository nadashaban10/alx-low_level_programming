#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *node;
  unsigned long int i;
  unsigned char comma_flag = 0;

  if (ht == NULL)
   {
	return;
  }

  printf("{");
  for (i = 0; i < ht->size; ++i)
   {
	node = ht->array[i];

	if (node != NULL)
	{
	  if (comma_flag)
	   {
		printf(", ");
	  }
	  comma_flag = 1;

	  while (node)
	  {
		printf("'%s': '%s'", node->key, node->value);
		if (node->next)
		{
		  printf(", ");
		}
		node = node->next;
	  }
	}
  }
  printf("}\n");
}
