#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n", "I am testing my string");
	printf("Unknown:[%r]\n", "I am testing my string");
	printf("The 8 task debugger : \n");
	_printf("%+d\n", 1024);
	_printf("%+d\n", -1024);
	_printf("%+d\n", 0);
	_printf("%+d\n", INT_MAX);
	_printf("%+d\n", INT_MIN);
	_printf("There is %+d bytes in %+d KB\n", 1024, 1);
	_printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	_printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%+i\n", 1024);
	_printf("%+i\n", -1024);
	_printf("%+i\n", 0);
	_printf("%+i\n", INT_MAX);
	_printf("%+i\n", INT_MIN);
	_printf("There is %+i bytes in %+i KB\n", 1024, 1);
	_printf("%+i - %+i = %+i\n", 1024, 2048, -1024);
	_printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("% d\n", 1024);
	_printf("% d\n", -1024);
	_printf("% d\n", 0);
	printf("END OF 8 task debuger \n");
	return (0);
}
