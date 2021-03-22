#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: Pointed to head of a list
 *
 * Return: head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new;

	new = *head;

	if (new == NULL)
		return (0);

	*head = new->next;
	data = new->n;
	free(new);

	return (data);
}
