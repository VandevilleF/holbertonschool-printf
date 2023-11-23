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
		return (-1);
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

/**
 * printdec - print decimal and integer
 * @arg: argument to print
 * Return number decimal or integer and count
 */

int printdec(va_list arg)
{
	int i, numt, buffer, count = 0;
	int num = va_arg(arg, int);
	
	if (num < 0)
	{
		num *= -1;
		putchar('-');
		count ++;
	}
	
	buffer = num;
	
	for (numt = 0; (buffer / 10) > 0; numt++)
		buffer /= 10;
	buffer = num;
	
	while (numt != 0)
	{
		for(i = 0; i < numt; i++)
			buffer /= 10;
		buffer %= 10;
		putchar(buffer + '0');
		count++;
		numt--;
		buffer = num;
	}
	putchar(num % 10 + '0');
	count++;
	return (count);
}
