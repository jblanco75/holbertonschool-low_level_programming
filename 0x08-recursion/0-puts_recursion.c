#include "holberton.h"
/**
 * _puts_recursion - prints a string recursively
 * @s:string
 * Return:string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}
}
