#include "holberton.h"
/**
 * _strcat - lame copy of atoi
 * @dest: variable to concat
 * @src: variable source
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
