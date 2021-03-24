#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to head of list
 *
 * Return: Nodes data sum
 */
int sum_listint(listint_t *head)
{
	int node_sum;

	if (!head)
		return (0);

	while (head != NULL)
	{
		node_sum += head->n;
		head = head->next;
	}
	return (node_sum);
}
