#include "hash_tables.h"
/**
 * hash_table_delete - frees a previously allocated hash table
 * @ht: pointer to the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
	{
		return;
	}

	unsigned long int i;
	hash_node_t *current_node, *next_node;

	for (i = 0; i < ht->size; ++i)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			next_node = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = next_node;
		}
	}
	free(ht->array);
	free(ht);
}
