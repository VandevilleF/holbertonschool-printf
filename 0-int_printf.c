#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _printf - copy of fonction printf
 * @format: string you need to print
 * Return: string
 */

int _printf(const char *format, ...)
{
	int count = 0;

	percent_func find_percent[] = {
		{"c", printchar},
		{"s", printstr},
		{"%", putmodulo},
		{"d", printdec},
		{"i", printdec},
		{NULL, NULL}
	};

	va_list arg;

	va_start(arg, format);

	count += get_up_func(format, find_percent, arg);

	va_end(arg);
	return (count);
}
