#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - prints anything
 * @format: pointer to string that contains specifiers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int count = 0, i = 0;
int (*f)(va_list);
va_list list;
va_start(list, format);
if (format == '\0')
return (-1); /*idk*/
while (format[i])
{
for (; (format[i] != '\0' && format[i] != '%'); i++)
{
_putchar(format[i]);
count++;
}
if (format[i] == '\0')
{
return (count);
}
else if (format[i] == '%' && (format[i + 1] == '\0' || format[i + 1] == '\n'))
{
return (-1);
}
else if (format[i] == '%')
{
f = getspecifier(format[i + 1]);
i += 2;
if (f == '\0')
{
if (format[i - 1] != '%')
{
_putchar('%');
count += 1;
}
_putchar(format[i - 1]);
count += 1;
}
else
{
count = count + f(list);
}
}
}
va_end(list);
return (count);
}
