#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: value to set on memory
 * @c: char to store on memory
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
