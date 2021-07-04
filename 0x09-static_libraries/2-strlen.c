#include "holberton.h"
/**
 * _strlen - counts string chars
 * @s: variable to validate
 * Return: value
 */
int _strlen(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
