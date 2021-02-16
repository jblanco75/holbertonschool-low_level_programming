#include "holberton.h"
/**
 * puts2 - prints odds
 * @str: variable to validate
 * Return: string
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)
		{
			putchar(str[c]);
		}
		c++;
	}
	putchar('\n');
}
