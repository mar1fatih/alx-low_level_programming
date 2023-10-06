#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @ht: ht
 * @key: key
 * Return: char 
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
