#include "hash_tables.h"
/**
 *hash_table_get - get hash table
 *@ht: pointer to hash table
 *@key: pointer to key
 *Return: value of key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *compare_key;
	unsigned long int index;
hash_node_t *current_node;

	if (*key == '\0')
	{
	return (NULL);
	}

	/*calculate index*/

	index = key_index((const unsigned char *)key, ht->size);

	/*initialize current_node for iteration*/
	current_node = ht->array[index];

	/*Traverse the linked list*/
	while (current_node)
	{
	/*compare keys*/
	compare_key = current_node->key;
	if (strcmp(compare_key, key) == 0)
	{
		/*Key found, return its value*/
		return (current_node->value);
	}
	current_node = current_node->next;
	}

	/*Key not found, return NULL*/
	return (NULL);
}
