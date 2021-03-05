#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: address begin to fill
 * @b: value to set on memory
 * @n: numbers of bytes to pointed by s
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		*(s + cont) = b;
		cont++;
	}
	return (s);
}

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
		_memset(arr, 0, total);
	}
	return (arr);
}
