#include "holberton.h"
/**
 * puts_half - prints half odds string
 * @str: variable to validate
 * Return: string
 */
void puts_half(char *str)
{
	int c, n;

	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 1)
	{
		n = (c - 1) / 2;
		n = c - n;
	}
	else
	{
		n = c / 2;
	}


	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
