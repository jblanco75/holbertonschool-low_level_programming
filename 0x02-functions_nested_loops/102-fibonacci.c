#include <stdio.h>

/**
 * main - fibonacci sequence
 * Return: result
 */

int main(void)
{
	int a = 2, b = 1, i;

	for (i = 0; i < 50; i++)
	{
		printf("%u, ", b);
		printf("%u, ", a);
		b = b + a;
		a = a + b;
	}
	return (0);
}
