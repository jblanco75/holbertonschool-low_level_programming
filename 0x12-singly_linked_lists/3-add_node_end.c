#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: Pointer to head of list
 * @str: Strings of list
 * Return: Nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newel, *tmp;
	unsigned int i = 0;

	newel = malloc(sizeof(list_t));

	if (newel == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}

	if (!newel)
	{
		return (NULL);
	}

	newel->str = strdup(str);
	newel->len = i;
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
