#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printstring - prints a string of chars
 * @list: argument string
 * Return: nothing
 */

void printstring(va_list list)
{
	int i = 0;
	char *s;

	s = va_arg(list, char *);

	while (s[i] != '\0')
	{
		_putchar(*s);
		i++;
	}
}
/**
 * printinteger - prints an integer
 * @list: integer(s)
 * Return: nothing
 */
void printinteger(va_list list)
{
	int n = va_arg(list, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		printinteger(n / 10);

	_putchar(n % 10 + '0');

}
