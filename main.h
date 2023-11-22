#ifndef __protect__
#define __protect__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct percent - function start with %
 * @form: char after %
 * @func_form: function associete
 */

typedef struct percent
{
	char *form;
	int (*func_form)(va_list arg);
} percent_func;

int _printf(const char *format, ...);
int (printchar(va_list arg));
int (printstr(va_list arg));
int (putmodulo(va_list));

#endif
