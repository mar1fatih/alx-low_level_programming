#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @ht: ht
 * @key: key
 * @value: value
 * Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ele;
	hash_node_t *current;
	unsigned long int index;

	if (!ht || !key)
		return (0);
	index = key_index((unsigned const char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_ele = malloc(sizeof(hash_node_t));
	if (!new_ele)
		return (0);
	new_ele->key = strdup(key);
	if (!new_ele->key)
	{
		free(new_ele);
		return (0);
	}
	new_ele->value = strdup(value);
	if (!new_ele->value)
	{
		free(new_ele->key);
		free(new_ele);
		return (0);
	}
	new_ele->next = ht->array[index];
	ht->array[index] = new_ele;
	return (1);
}
