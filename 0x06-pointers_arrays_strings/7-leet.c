#include "holberton.h"
/**
 * leet - returns an array switched
 * @c: array
 * Return: array switched
 */
char *leet(char *c)
{
	int i, j;

	l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (c[i] == l[j])
			{
				c[i] = n[j];
			}
		}
	}
	return (c);
}
