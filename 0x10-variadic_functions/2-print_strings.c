#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointed to char prints between strings
 * @n:  number of arguments to input a variadic function
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list row;
	unsigned int i;
	char *str;

	va_start(row, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(row, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator == NULL)
			continue;
		else if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(row);
	printf("\n");
}
