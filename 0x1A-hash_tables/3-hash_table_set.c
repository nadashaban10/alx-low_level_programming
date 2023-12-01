#include "hash_tables.h"
/**
 *hash_table_set - function that add a new nodes
 *@key: keys of table
 *@ht: hash table
 *@value: values if table
 *Return: return (1) successful
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  
  unsigned long int index;
  hash_node_t *new_node;
  char *new_key_copy;
  char *new_value_copy;
  hash_node_t *current_node;


  /* check for empty key*/
  if (*key == '\0')
  {
	return (0);
  }

  /*calculate the index using key index func*/
  index = key_index((const unsigned char *)key, ht->size);

  /*allocate memory for new node if the key not exist*/
  new_node = malloc(sizeof(hash_node_t));
  if (new_node == NULL)
  {
	return 0;
  }

  /*allocate memory for key and value copies*/
  new_key_copy = strdup(key);
  new_value_copy = strdup(value);
  if (new_key_copy == NULL || new_value_copy == NULL) {
	free(new_node);
	return (0);
  }

  /*Assign values to new node*/
  new_node->key = new_key_copy;
  new_node->value = new_value_copy;
  new_node->next = NULL;

  /*initialize current_node for iteration*/
  current_node = ht->array[index];

  /*Check for existing key*/
  while (current_node)
  {
	if (strcmp(current_node->key, key) == 0)
	{
	  free(new_key_copy);
	  free(new_value_copy);
	  free(new_node);
	  return (0);
	  /*Key already exists, update value if needed*/
	}
	current_node = current_node->next;
  }

  /*Add new node to the beginning of the list*/
  new_node->next = ht->array[index];
  ht->array[index] = new_node;
	return (1); /*successfully*/
}