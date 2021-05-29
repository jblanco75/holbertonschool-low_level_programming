#include "hash_tables.h"
/**
 * hash_table_print - This function prints a hash table.
 * @ht: The Hash table.
 *
 * Return: Nothing.
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tester = NULL;
	char *p = "";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i] != NULL)
		{
			tester = ht->array[i];
			while (tester != NULL)
			{
				printf("%s'%s': '%s'", p, tester->key, tester->value);
				p = ", ";
				tester = tester->next;
			}
		}
	}
	printf("}\n");
}
