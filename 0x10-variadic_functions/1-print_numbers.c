#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: pointed to char prints between numbers
 * @n:  number of arguments to input a variadic function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list row;
	unsigned int i;


	va_start(row, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(row, int));

		if (separator == NULL)
			return;
		else if (i + 1 != n)
			printf("%c", *separator);
	}
	va_end(row);
	printf("\n");
}
