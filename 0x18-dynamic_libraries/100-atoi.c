#include "holberton.h"
/**
 * _atoi - lame copy of atoi
 * @s: variable to validate
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int res, i;
	int x;

	res = 0;
	x = 1;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + s[i] - '0';
			if (s[i + 1] == ' ')
			{
				break;
			}
		}
		else if (s[i] == '-')
		{
			x = x * -1;
		}
	}
	return (res * x);
}
