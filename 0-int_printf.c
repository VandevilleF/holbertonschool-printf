#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct percent
{
	char *form;
	void (*func_form)(va_list);
} percent_func;

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
			if (format[i + 1] == *find_percent[0].form)
				find_percent[0].func_form(arg);
			if (format[i + 1] == *find_percent[1].form)
				find_percent[1].func_form(arg);
			if (format[i + 1] == *find_percent[2].form)
				find_percent[2].func_form(arg);
			i +=2;
		}
		putchar(format[i]);
	}
	va_end(arg);
	return (0);
}

/* Don't forget to add the main !! */
