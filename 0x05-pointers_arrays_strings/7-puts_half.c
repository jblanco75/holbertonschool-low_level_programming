#include "holberton.h"
/**
 * puts_half - prints half odds string
 * @str: variable to validate
 * Return: string
 */
void puts_half(char *str)
{
	int c, n, p;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 1)
	{
		c = c + 1;
	}

	n = c / 2;

	for (p = n; p < c; p++)
	{
		_putchar(str[p]);
	}
}
