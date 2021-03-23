#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	listint_t *new2;

	new = *head;

	while (new != NULL)
	{
		new2 = new;
		new = new2->next;
		free(new2);
	}
	*head = NULL;
}
