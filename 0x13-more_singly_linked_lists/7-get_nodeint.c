#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: Pointer to head of list
 * @index: index of node
 * Return: Nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *s = head;

	while (i < index)
	{
		if (s == NULL)
			return (NULL);
		i++;
		s = s->next;
	}
	return (s);
}
