#include "holberton.h"
/**
 * _strcmp - lame copy of strcmp
 * @s1: string to compare
 * @s2: string to compare
 * Return: string concatenated
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
