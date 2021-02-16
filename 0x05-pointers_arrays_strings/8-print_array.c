#include "holberton.h"
/**
 * print_array - prints arrays
 * @n: variable to validate
 * @a: variable to validate
 * Return: array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
