#include "hash_tables.h"
/**
 * *hash_table_create - function to create a hash table
 * @size: size of the array in table
 * Return: Pointer to the newly created table or NULL upon error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t) * size);

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}