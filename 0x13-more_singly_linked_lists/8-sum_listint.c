#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to head of list
 *
 * Return: Nodes data sum
 */
int sum_listint(listint_t *head)
{
	listint_t *s = head;
	int node_sum;

	if (!head)
		return (0);

	while (s != NULL)
	{
		node_sum += s->n;
		s = s->next;
	}
	return (node_sum);
}
