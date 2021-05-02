#include "lists.h"
/**
 * delete_dnodeint_at_index -  function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to Pointed to head of a list
 * @index:  index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *tmp2;
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
			tmp2 = tmp->prev;
			tmp2->next = tmp->next;
			tmp->next->prev = tmp2;
			free(tmp);
			return (1);
		}
		i++;
		tmp2 = tmp;
		tmp = tmp->next;
	}
	return (-1);
}
