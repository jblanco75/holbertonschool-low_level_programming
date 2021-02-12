#include "holberton.h"
/**
 * print_square - prints a square
 * @size: variable to evaluate
 * Return: char
 */
void print_square(int size)
{
	int p;
	int q;

	if (size > 0)
	{
		for (p = 0; p < size; p++)
		{
			for (q = 0; q < size; q++)
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
