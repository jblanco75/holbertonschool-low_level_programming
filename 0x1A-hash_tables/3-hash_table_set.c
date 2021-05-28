#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *tester;
	unsigned int index;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tester = ht->array[index];

	while (tester)
	{
		if (strcmp(key, tester->key) == 0)
		{
			free(tester->value);
			tester->value = strdup(value);
			return (1);
		}
		tester = tester->next;
	}
	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
