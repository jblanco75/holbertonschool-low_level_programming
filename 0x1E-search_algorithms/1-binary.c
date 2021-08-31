#include "search_algos.h"
/**
 * binary_search - function to implement binary search algorithm
 * @array: pointer to first element of array to search
 * @size: size of array to search
 * @value: value to search for in array
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i, mid, low, high;

	low = 0;
	high = size - 1;
	mid = (low + high) / 2;

	if (!array)
	{
		return (-1);
	}
	if (array[mid] == value)
	{
		return (mid);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (high + low) / 2;

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}
