#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: Pointer to head of list
 *
 * Return: Nodes data sum
 */
int sum_dlistint(dlistint_t *head)
{
	int node_sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}
	return (node_sum);
}
