#include "holberton.h"
/**
 * print_most_numbers - numbers 0-9
 * Return: numbers
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');

}
