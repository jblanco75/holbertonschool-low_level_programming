#include "holberton.h"
/**
 * cap_string - returns caps on first letter
 * @c: array
 * Return: array capitalized
 */
char *cap_string(char *c)
{
	int i, j;
	char z[] = {' ', '\t', '\n', ',', ';', '.', '!',
		    '?', '(', ')', '{', '}', '"'};

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; z[j] != '\0'; j++)
			if (c[i] == z[j] && c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
	return (c);
}
