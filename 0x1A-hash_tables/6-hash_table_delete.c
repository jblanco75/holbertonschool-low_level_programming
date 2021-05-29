#include "hash_tables.h"
/**
 * hash_table_delete - function to delete this eyesore
 * @ht: eyesore
 *
 * Return: The index
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tester = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		
		while (ht->array[i])
		{
			tester = ht->array[i];
			free(tester->key);
			free(tester->value);
			free(tester);
			ht->array[i] = ht->array[i]->next;
		}
	}
	free(ht->array);
	free(ht);
}
