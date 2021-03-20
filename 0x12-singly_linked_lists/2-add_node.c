#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer to head of list
 * @str: Strings of list
 * Return: Nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newel;
	unsigned int i = 0;

	newel = malloc(sizeof(list_t));

	if (newel == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}

	if (!newel)
		return (NULL);
	else
	{
		newel->str = strdup(str);
		newel->len = i;
		newel->next = *head;
		*head = newel;
	}
	return (newel);
}
