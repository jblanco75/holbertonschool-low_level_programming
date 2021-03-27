#include "holberton.h"
/**
 * flip_bits - Returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: Value decimal to decimal
 * @m: Value decimal to decimal
 *
 * Return: values
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int c = n ^ m;

	while (c != 0)
	{
		c = c & (c - 1);
		count++;
	}
	return (count);
}
