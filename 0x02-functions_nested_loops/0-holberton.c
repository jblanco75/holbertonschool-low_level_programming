#include "holberton.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int n = 0;
char out[9] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
for (n = 0; n <= 8 ; ++n)
{
_putchar(out[n]);
}
_putchar('\n');
return (0);
}
