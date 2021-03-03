#include "holberton.h"
/**
 * alloc_grid - creates pointer to a 2 dimensional array of integers
 * @width: value to set on memory
 * @height: char to store on memory
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array == 0)
		return (NULL);
	for (j = 0; j < width; j++)
	{
		array[j] = malloc(height * sizeof(int));
	}
	array[i][j] = 0;
	return (array);
}
