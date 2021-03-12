#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void p_char(va_list args);
void p_int(va_list args);
void p_float(va_list args);
void p_string(va_list args);

/**
 * struct tp_str - structure
 * @tp: char name for print
 * @f: function to print
 */
typedef struct tp_str
{
	char *tp;
	void (*f)();
} tp_s;

#endif
