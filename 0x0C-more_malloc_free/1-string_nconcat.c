#include "holberton.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: variable to concat
 * @s2: variable ti concat
 * @n: spaces to allocate
 * Return: string concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *s3;
	int p;

	p = n * 1;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}

	i = i + j;

	s3 = malloc(sizeof(char) * n);

	if (s3 == 0)
		return (NULL);
	if (p >= s2[j])
		s3[i] = s2[j];
	for (i = 0; s1[i]; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		s3[i] = s2[j];
	}
	s3[i] = '\0';
	return (s3);
}
