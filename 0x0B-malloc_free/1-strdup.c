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

	if (str == 0)
	{
		return (NULL);
	}
	for (size = 0; str[size]; size++)
	{
		size++;
	}
	str2 = malloc(sizeof(char) * (size + 1));
	if (str2 == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	return (str2);
}
