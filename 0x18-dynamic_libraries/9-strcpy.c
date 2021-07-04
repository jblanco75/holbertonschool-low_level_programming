#include "holberton.h"
/**
 * _strcpy - reverse a string
 * @dest: string destination
 * @src: string source
 * Return: void
 **/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
