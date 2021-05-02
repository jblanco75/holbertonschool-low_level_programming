#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: pointer to head of a list
 * @idx:  index of the node to insert
 * @n: Value to set on field n of new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	int index = (int)idx;
	int i = 0;

	if (h == NULL)
		return (0);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (tmp)
	{
		if (i == (index - 1))
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			new_node->prev = tmp;
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
