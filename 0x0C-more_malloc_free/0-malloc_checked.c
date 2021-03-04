#include "holberton.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amout of byte to store on memory
 *
 * Return: pointer void
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == 0)
	{
		exit(98);
	}
	else
	{
		return (c);
	}
}
