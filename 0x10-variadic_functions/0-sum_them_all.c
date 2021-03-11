#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n:  number of arguments to input a variadic function
 *
 * Return: Result of sum all number
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list sm;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(sm, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sm, int);
	}
	va_end(sm);
	return (result);
}
