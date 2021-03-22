#include "lists.h"
/**
 * listint_len - Returns the elements of a listint_t list
 * @h: Pointer to head of list
 *
 * Return: Nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *s = h;
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
