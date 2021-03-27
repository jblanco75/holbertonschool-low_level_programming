#include "holberton.h"
/**
 * get_bit - prints binary number from a long int
 * @n: long int
 * @index: index, starting from 0 of the bit to get
 * Return: Value in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 32)
	{
		return (-1);
	}
	else
	{
		num = (n >> index) & 1;
	}
	return (num);
}
