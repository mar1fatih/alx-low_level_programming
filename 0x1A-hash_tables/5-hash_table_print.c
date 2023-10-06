#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht: ht
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int c = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (c != 0)
			{
				printf(", ");
			}
			printf("'%s' : '%s'", current->key, current->value);
			c++;
			current = current->next;
		}
	}
	printf("}\n");
}
