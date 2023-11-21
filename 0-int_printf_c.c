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
	char c;
	c = va_arg(arg, int);
	putchar(c);
}

/*void (printstr(va_list arg))
{
	printf("string");
}

void (putmodulo(va_list arg))
{
	printf("modulo");
}*/

/**
 * _printf - copy of fonction printf
 * @format: string you need to print
 * Return: string
 */

int _printf(const char *format, ...)
{
	int i;
	int n = strlen(format);
	
	percent_func find_percent[] = {
		{"c", printchar},
		/*{"s", printstr},*/
		/*{"%", putmodulo},*/	
		{NULL, NULL}
	};
	
	va_list arg;
	va_start(arg, format);
	
	for (i = 0; i < n; i++)
	{
		if (format[i] == '%')
		{
			int j = 0;
			while (find_percent[j].form != 0)
			{
				if (format[i + 1] == *find_percent[j].form)
					(find_percent[j].func_form(arg));
				j++;
			}
			i += 2;
		}
		putchar(format[i]);
	}
	va_end(arg);
	return (0);
}

/* Don't forget to add the main !! */

int main(void)
{
	int len;
    int len2;
	len = _printf("Personnalisé : Percent:[%%]\n");
    len2 = printf("Original :     Percent:[%%]\n");
	return(0);
}