#include "holberton.h"
/**
 * swap_int - swap values
 * @a: variable to validate
 * @b: variable to validate
 * Return: values
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
