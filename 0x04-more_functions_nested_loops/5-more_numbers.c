#include "holberton.h"
/**
 * more_numbers - numbers 0-14
 * Return: numbers
 */
void more_numbers(void)
{
	int n;
	int p;

	for (n = 0; n <= 10; n++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
			{
				_putchar(p / 10 + '0');
			}
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}

}
