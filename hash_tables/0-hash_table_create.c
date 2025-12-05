#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	int array;

	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(sizeof(hash_node_t));

	for (array = 0; array < ht->size; array++)
		{
			hash_node_t *array = ht->array[size];
		}
	return (ht);

}
