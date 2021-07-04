#include "holberton.h"

/**
 * _memcpy - copies a block of memory
 *
 * @dest: pointer
 * @src: block to copy
 * @n: number of spaces
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
