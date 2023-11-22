#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * get_up_func - function
 * @format: format to print
 * @find_percent: array specifier
 * @arg: argument to print
 * Return: print format and 1 for count
 */

int get_up_func(const char *format, percent_func find_percent[], va_list arg)
{
	int i;
	int n = strlen(format);
	int count = 0;

	for (i = 0; i < n; i++)
	{
		if (format[i] == '%')
		{
			int j = 0;

			while (find_percent[j].form != 0)
			{
				if (format[i + 1] == *find_percent[j].form)
				{
					count += (find_percent[j].func_form(arg));
					break;
				}
				j++;
			}
			i++;
		}
		else
		{
			putchar(format[i]);
			count++;
		}
	}
	return (count);
}
