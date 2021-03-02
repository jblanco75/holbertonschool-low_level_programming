#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: value to set on memory
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *str2;

	for (i = 0; str[i]; i++)
	{
		size++;
	}
	size++;

	if (str == 0)
	{
		return (NULL);
	}
	if (str2 == 0)
	{
		return (NULL);
	}
	str2 = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	return (str2);
}
