#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table
 * Return: nothing or null if fail
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int cont = 0;
	hash_node_t *tmp = NULL;

	if (!ht || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (cont > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			cont++;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
