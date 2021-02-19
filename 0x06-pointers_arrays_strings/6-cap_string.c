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

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; z[j] != '\0'; j++)
			if (c[i] == z[j])
			{
				i++;
				if (c[i] >= 'a' && c[i] <= 'z')
					c[i] = c[i] - 32;
			}
	}
	return (c);
}
