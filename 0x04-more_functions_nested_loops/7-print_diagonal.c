#include "holberton.h"
/**
 * print_diagonal - prints a diagonal
 * @n: variable to evaluate
 * Return: char
 */
void print_diagonal(int n)
{
	int p;
	int q;

	if (n > 0)
	{
	for (p = 0; p < n; p++)
	{
		for (q = 0; q < p; q++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (p != n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
	}
	else
	{
		_putchar('\n');
}
