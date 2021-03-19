#include "lists.h"
/**
 * list_len - Prints all the elements of a list_t list
 * @h: Pointer to head of list
 *
 * Return: Nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *s = h;
	unsigned int i = 0;

	if (s == NULL)
		return (0);


	while (s != NULL)
	{
		i++;
		s = s->next;
	}
	return (i);
}
