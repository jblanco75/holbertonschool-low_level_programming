#include "holberton.h"
/**
 * print_most_numbers - numbers 0-9 except 2,4
 * Return: numbers
 */
void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c == 2 || c == 4)
		{
			c++;
			continue;
		}
		_putchar(c + '0');
		c++;

	}
	_putchar('\n');
}
