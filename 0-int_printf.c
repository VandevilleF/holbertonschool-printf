#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - copy of fonction printf
 * @format: string you need to print
 * Return: string
 */

int _printf(const char *format, ...)
{
	int i;
	int n = strlen(format);
	
	va_list arg;
	va_start(arg, format);
	
	for (i = 0; i < n; i++)
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			printf("string");
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			printf("char");
			i += 2;
		}
		putchar(format[i]);
	}
	va_end(arg);
	return (0);
}
