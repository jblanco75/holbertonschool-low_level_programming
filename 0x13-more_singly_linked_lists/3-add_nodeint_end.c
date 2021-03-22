#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: Pointer to head of list
 * @n: int list
 * Return: Nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newel, *tmp;
	unsigned int i = 0;

	newel = malloc(sizeof(listint_t));

	if (newel == NULL)
		return (0);

	while (i != '\0')
	{
		i++;
	}

	if (!newel)
	{
		return (NULL);
	}

	newel->n = n;
	newel->next = NULL;

	if (*head == NULL)
	{
		*head = newel;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newel;

	return (newel);
}
