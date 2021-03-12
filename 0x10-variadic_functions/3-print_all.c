#include "variadic_functions.h"
/**
 * print_all - prints all arguments according given format
 * @format: format to print
 * Return: void function
 */
void print_all(const char * const format, ...)
{
	va_list row;
	int i = 0;
	char *str;

	va_start(row, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(row, int));
			break;
		case 'i':
			printf("%i", va_arg(row, int));
			break;
		case 'f':
			printf("%f", va_arg(row, double));
			break;
		case 's':
			str = va_arg(row, char*);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(row);
}
