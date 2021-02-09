#include "holberton.h"
/**
 * print_alphabet - entry point
 * Return: 0
 */
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z' ; n++)
{
_putchar(n);
}
_putchar('\n');
}
