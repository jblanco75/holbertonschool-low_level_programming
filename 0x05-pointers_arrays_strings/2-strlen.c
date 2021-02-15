#include "holberton.h"
/**
 * _strlen - counts string chars
 * @s: variable to validate
 * Return: value
 */
int _strlen(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	
	return (*s);
}
