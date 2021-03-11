#include "function_pointers.h"
/**
 * array_iterator - iterates elements of an array
 * @array: array to iterate
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || size <= 0 || !array || !size)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
