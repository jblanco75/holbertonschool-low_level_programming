#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: pointer to the value associated with the element, or NULL if key
 * couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tester;
	unsigned int index;

	if (!ht || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tester = ht->array[index];

	while (tester)
	{
		if (strcmp(key, tester->key) == 0)
		{
			return (tester->value);
		}
		tester = tester->next;
	}
	return (NULL);
}
