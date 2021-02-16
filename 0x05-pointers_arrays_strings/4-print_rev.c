#include "holberton.h"
/**
 * print_rev - prints reverse
 * @s: variable to validate
 * Return: string
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	for (i = 0; i <= c; i++)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
