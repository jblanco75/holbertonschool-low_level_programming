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
		return;
	}
	else
	{
		putchar(s[0]);
		_puts_recursion(&s[1]);
	}
	putchar('\n');
}
