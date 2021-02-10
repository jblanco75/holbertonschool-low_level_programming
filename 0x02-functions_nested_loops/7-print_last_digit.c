#include "holberton.h"
/**
 * print_last_digit - outputs last digit of a number
 * @n: integer for validation
 * Return: digit
 */
int print_last_digit(int n)
{
int f;
f = n % 10;
if (f < 0)
{
f = f * (-1);
_putchar(f + '0');
return (f);
}
else
{
_putchar(f + '0');
return (f);
}
}
