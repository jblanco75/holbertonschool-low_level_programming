#include "holberton.h"
/**
 * _printf - gets an output from given format
 * @format: character string
 * Return: the number of characters printed excluding the null byte
 * used to end output to strings
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list list;
	int len = 0;


	case_f function[] = {
		{"c", _putchar},
		{"s", printstring},
		{"d", printinteger},
		{"i", printinteger},
		{NULL, NULL}
	};

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			for (j = 0; function[j]; j++)
			{
				if (format[i] == *function[j].s)
				{
					return (function[j].fc);
				}
			}

			if (format[i + 1] == '%')
			{
				putchar('%');
			}
		}
		else
		{
			putchar(format[i]);
		}
		len++;
	}
	va_end(list);
	return (len);
}
