#include "holberton.h"
/**
 *prime - if n is prime
 *@y: integer
 *@n: integer
 *Return: prime check or 1 or 0
 */
int prime(int y, int n)
{
	if (n == y)
		return (1);
	if (n % y == 0)
		return (0);
	else
		return (prime(y + 1, n));
}
/**
 *is_prime_number- find if n is prime
 *@n: integer
 *Return: 1 or 0
 *
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (prime(2, n));
}
