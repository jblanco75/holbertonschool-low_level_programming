#include "holberton.h"
/**
 * rot13 - returns an array switched
 * @c: array
 * Return: array switched
 */
char *rot13(char *c)
{
	int i, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (c[i] == l[j])
			{
				c[i] = n[j];
				break;
			}
		}
	}
	return (c);
}
