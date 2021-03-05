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
	void *arr;
	unsigned int total;

	total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (arr == 0)
		return (NULL);

	arr = malloc(total);

	if (arr != 0)
	{
		memset(arr, 0, total);
	}
	return (arr);
}
