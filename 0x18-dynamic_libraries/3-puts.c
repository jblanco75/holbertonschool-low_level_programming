#include "holberton.h"
/**
 * _puts - prints string chars
 * @str: variable to validate
 * Return: value
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
