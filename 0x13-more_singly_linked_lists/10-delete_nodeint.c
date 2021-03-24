#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to Pointed to head of a list
 * @index:  index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *prv;
	int idx = (int)index;
	int i = 0;

	if (!*head)
		return (-1);

	if (!idx)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp)
	{
		if (i == idx)
		{
			prv->next = tmp->next;
			free(tmp);
			return (1);
		}
		i++;
		prv = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
