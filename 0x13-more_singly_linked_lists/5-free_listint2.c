#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *new = *head;

	listint_t *next = NULL;

	for (; new != NULL; new = next)
	{
		next = new->next;
		free(&new->n);
		free(new);
	}
}
