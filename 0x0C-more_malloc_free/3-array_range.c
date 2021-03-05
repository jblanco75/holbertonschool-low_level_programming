#include "holberton.h"
/**
 * array_range - function that creates an array of integers
 * @min: min value to store on memory
 * @max: max value to store one memory
 *
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *arr;
	int total;
	int i;

	if (min > max)
		return (NULL);

	total = (max - min) + 1;

	arr = malloc(sizeof(int) * total);

	if (arr == 0)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
