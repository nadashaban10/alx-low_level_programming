#include "hash_tables.h"
/**
 *key_index - function that return index
 *@key: key to return index
 *@size: size of hash table
 *Return: index of keys
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
unsigned long int sh_index;

hash = hash_djb2(key);
sh_index = hash % size;
return (sh_index);
}