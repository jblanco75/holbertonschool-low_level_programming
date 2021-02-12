#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: variable to evaluate
 * Return: chars
 */
void print_triangle(int size)
{
	int p;
	int q;

	if (size > 0)
	{
		for (p = 1; p <= size; p++)
		{
			for (q = p; q < size; q++)
			{
				_putchar(' ');
			}
			for (q = 1; q <= p; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
