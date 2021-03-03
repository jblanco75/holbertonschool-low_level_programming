#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: variable to concat
 * @s2: variable ti concat
 * Return: string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *s3;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	k = i + j;

	s3 = malloc(sizeof(char) * k);

	if (s3 == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[k] = '\0';
	return (s3);
}
