#include "holberton.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the char
 *
 * @s: pointer
 * @c: char to find
 * Return: S or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
