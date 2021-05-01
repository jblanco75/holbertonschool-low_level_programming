#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head) 
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
