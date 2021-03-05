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
	unsigned int p;
	unsigned int len_s1, len_s2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	p = len_s1 + n;

	s3 = malloc(sizeof(char) * (p + 1));

	if (s3 == 0)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[len_s1 + j] = s2[j];
	}
	s3[len_s1 + j] = '\0';
	return (s3);
}
