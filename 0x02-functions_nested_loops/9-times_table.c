#include "holberton.h"
/**
 * times_table - outputs last digit of a number
 * Return: table
 */
void times_table(void)
{
	int h;
	int v;
	int m;

	for (v = 0; v < 10; v++)
	{
		_putchar('0');
		for (h = 1; h < 10; h++)
		{
			m = h * v;
			_putchar(',');
			_putchar(' ');
			if (m <= 9)
			{
				_putchar(' ');
			}
			else 
			{
				_putchar(m / 10 + '0');

			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}

}
