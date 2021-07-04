#include "holberton.h"

/**
 * _memset - reserves space on memory
 *
 * @s: pointer
 * @b: filling
 * @n: number of spaces
 * Return: S
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
