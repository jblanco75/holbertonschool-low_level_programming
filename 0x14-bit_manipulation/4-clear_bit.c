#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: long int
 * @index: index, starting from 0 of the bit to get
 * Return: Value in index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
