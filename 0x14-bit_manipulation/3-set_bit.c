#include "holberton.h"
/**
 * set_bit - prints binary number from a long int
 * @n: long int
 * @index: index, starting from 0 of the bit to get
 * Return: Value in index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n  |= 1 << index;

	return (1);
}
