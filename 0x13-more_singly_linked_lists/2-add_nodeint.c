#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: Pointer to head of list
 * @n: int list
 * Return: Nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newel;
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
	newel->next = *head;
	*head = newel;

	return (newel);
}
