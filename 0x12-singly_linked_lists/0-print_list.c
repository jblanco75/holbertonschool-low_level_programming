#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to head of list
 *
 * Return: Nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *s = h;
	size_t i = 0;

	if (s == NULL)
		return (0);


	while (s != NULL)
	{
		if (s->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", s->len, s->str);
		}
		s = s->next;
		i++;
	}
	return (i);
}
