#include "variadic_functions.h"
/**
 * p_char - print all the char args
 * @args: args passed to the function
 * Return: void function
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * p_int - print all the int args
 * @args: args passed to the function
 * Return: void function
 */
void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * p_float - print all the float args
 * @args: args passed to the function
 * Return: void function
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * p_string - print all the string args
 * @args: args passed to the function
 * Return: void function
 */
void p_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil");
	else
		printf("%s", str);
}
/**
 * print_all - prints all arguments according given format
 * @format: format to print
 * Return: void function
 */

void print_all(const char * const format, ...)
{
	va_list row;
	unsigned int i, j;
	char *str = " ";

	tp_s p_format[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}

	};
	va_start(row, format);

	i = 0;
	while (format[i])
	{
		j = 0;
		while (p_format[j].tp != NULL)
		{
			if (format[i] == p_format[j].tp[0])
			{
				printf("%s", str);
				p_format[j].f(row);
				str = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(row);
}
