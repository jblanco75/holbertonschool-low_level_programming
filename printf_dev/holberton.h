#ifndef _PRINTF_
#define _PRINTF_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>


int _printf(const char *format, ...);
void printstring(va_list list);
void printinteger(va_list list);
int _putchar(char c);
/**
 *struct sw_case - contains indicator and function pointerB
 *@s: string with format
 *@fc: pointer to function
 */
typedef struct sw_case
{
	char *s;
	void (*fc)();
} case_f;

#endif
