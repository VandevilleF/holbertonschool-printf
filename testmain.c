#include "main.h"

int main(void)
{
	int len;
	int len2;
	
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
       	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("%d, %d\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	_printf("%d, %d\n", len, len2);
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	_printf("%d, %d\n", len, len2);
	len = _printf("Percent:[%%%%%%%%%%]\n");
	len2 = printf("Percent:[%%%%%%%%%%]\n");
	_printf("%d, %d\n", len, len2);
	len = _printf("falche Negative:[%d]\n", -762534);
	len2 = printf("vrai Negative:[%d]\n", -762534);
	_printf("%d, %d\n", len, len2);
	len = _printf("falchePositive:[%d]\n", 762534);
	len2 = printf("vrai Positive:[%d]\n", 762534);
	_printf("%d, %d\n", len, len2);
	len = _printf("falchePositive:[%i]\n", 762534);
	len2 = printf("vrai Positive:[%i]\n", 762534);
	_printf("%d, %d\n", len, len2);
	return (0);
}
