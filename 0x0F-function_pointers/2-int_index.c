#include "function_pointers.h"
/**
 * int_index - iterates elements of an array
 * @array: array to iterate
 * @size: size of array
 * @cmp: function pointer
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || size <= 0 || !array || !size)
		return (-1);

	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
