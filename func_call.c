#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * printchar - print character
 * @arg: argument to print
 * Return: char print and 1 for the count
 */
int (printchar(va_list arg))
{
	char c;

	c = va_arg(arg, int);
	putchar(c);
	return (1);
}

/**
 * printstr - print string
 * @arg: argument to print
 * Return: string and index for count
 */
int (printstr(va_list arg))
{
	int s;
	char *str = va_arg(arg, char*);
	
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (s = 0; str[s] != '\0'; s++)
		putchar(str[s]);
	return (s);
}

/**
 * putmodulo - printf modulo
 * @arg: argument to print
 * Return: modulo and 1 for count
 */

int (putmodulo(__attribute__((unused))va_list arg))
{
	putchar('%');
	return (1);
}
