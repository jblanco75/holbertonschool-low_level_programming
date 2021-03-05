#include "holberton.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: amount to values to store on memory
 * @size: number of bytes of datatype
 *
 * Return: Void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int total;
	unsigned int i;

	total = nmemb * size;

	arr = malloc(total);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (arr == 0)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		arr[i] = '\0';
	}
	return (arr);
}
