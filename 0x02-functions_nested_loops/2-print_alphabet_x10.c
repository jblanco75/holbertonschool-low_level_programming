#include "holberton.h"
/**
 * main - entry point
 * Return: 0
 */
void print_alphabet_x10(void);
{
int g;
char n;
for (g = 0 ; g <= 9 ; ++g)
{
for (n = 'a'; n <= 'z' ; n++)
_putchar(n);
}
_putchar('\n');
}

