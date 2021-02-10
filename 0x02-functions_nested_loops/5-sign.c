#include "holberton.h"
/**
 * print_sign - prints sign of a number
 * @n: variable to validate
 * Return: sign and digit
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
