#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to head of list
 *
 * Return: Nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *s = h;
	size_t i = 0;

	if (s == NULL)
		return (0);


	while (s != NULL)
	{
		if (s->n == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", s->n);
		}
		s = s->next;
		i++;
	}
	return (i);
}
