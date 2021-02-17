#include "holberton.h"
/**
 * _atoi - lame copy of atoi
 * @s: variable to validate
 * Return: integer
 */
int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		res = res * 10 + s[i] - '0';
	}
	return (res);
}
