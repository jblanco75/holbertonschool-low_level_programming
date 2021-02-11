#include "holberton.h"
/**
 * print_line - prints a line
 * @n: variable to evaluate
 * Return: char
 */
void print_line(int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
