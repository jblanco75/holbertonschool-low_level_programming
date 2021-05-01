#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: Pointer to head of list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
