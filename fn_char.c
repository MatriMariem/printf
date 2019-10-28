#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_c - prints a char and returns 1
* @c: the list of arguments
* Return: number of printed characters
*/
int print_c(va_list c)
{
char ch = (char)va_arg(c, int);
_putchar(ch);
return (1);
}
/**
* print_s - prints a string and returns the length of string
* @s: the list of arguments
* Return: number of printed characters
*/
int print_s(va_list s)
{
char *string;
int i = 0;
string = va_arg(s, char *);
if (string == '\0')
{
string = "(null)";
}
for (i = 0; string[i]; i++)
{
_putchar(string[i]);
}
return (i);
}
/**
* print_rs - prints the reversed string and returns the length of string
* @rs: the list of arguments
* Return: number of printed characters
*/
int print_rs(va_list rs)
{
char *string;
int i = 0, count = 0;
string = va_arg(rs, char *);
if (string == '\0')
{
string = ")llun(";
}
for (i = 0; string[i]; i++)
{
;
}
i--;

for (; i >= 0; i--)
{
_putchar(string[i]);
count++;
}
return (count);
}
