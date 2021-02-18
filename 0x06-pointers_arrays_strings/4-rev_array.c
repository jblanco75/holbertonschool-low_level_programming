#include "holberton.h"
/**
 * reverse_array - returns an array inverted
 * @a: array
 * @n: number of ints
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i, j, p;

	for (i = 0, j = n - 1 ; i < j; i++, j--)
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
	}
}
