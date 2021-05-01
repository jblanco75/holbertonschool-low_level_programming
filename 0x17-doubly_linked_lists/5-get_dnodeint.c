#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to head of list
 * @index: index of node
 * Return: Nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *s = head;

	while (i < index)
	{
		if (s == NULL)
			return (NULL);
		i++;
		s = s->next;
	}
	return (s);
}
