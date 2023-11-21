#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

void (printchar(va_list arg))
{
	printf("char");
}

void (printstr(va_list arg))
{
	printf("string");
}

void (putmodulo(va_list arg))
{
	printf("modulo");
}

/**
 * _printf - copy of fonction printf
 * @format: string you need to print
 * Return: string
 */

int _printf(const char *format, ...)
{
	int i, j;
	int n = strlen(format);
	int count = 0;
	
	percent_func find_percent[] = {
		{"c", printchar},
		{"s", printstr},
		{"%", putmodulo},
		{NULL, NULL}
	};
	
	va_list arg;
	va_start(arg, format);
	
	for (i = 0; i < n; i++)
	{
		if (format[i] == '%')
		{
			int j = 0;
			while (find_percent[j].form != '\0')
			{
				if (format[i + 1] == *find_percent[j].form)
					(find_percent[j].func_form(arg));
				j++;
			}
			i += 2;
		}
		putchar(format[i]);
		count++;
	}
	va_end(arg);
	return (count);
}

/* Don't forget to add the main !! */
