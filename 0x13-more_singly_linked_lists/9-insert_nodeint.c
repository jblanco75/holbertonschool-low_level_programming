#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: pointer to Pointed to head of a list
 * @idx:  index of the node to insert
 * @n: Value to set on field n of new node
 *
 * Return: Pointer to a node select
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	int index = (int)idx;
	int i = 0;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp)
	{
		if (i == (index - 1))
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		i++;
		tmp = tmp->next;
	}
	free(new_node);
	return (NULL);
}
