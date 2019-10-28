#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
*_print_i - prints an integer
*@vi: the list of arguments
* Return: number of printed characters
*/
int _print_i(va_list vi)
{
int i, num, div, o, n, count = 0;
n = va_arg(vi, int);
o = n % 10;
n = n / 10;
if (o < 0)
{
n = -n;
o = -o;
_putchar('-');
count++;
}
num = n;
div = 1;
if (num > 0)
{
while ((num / 10) != 0)
{
num = num / 10;
div = div * 10;
}
while (div >= 1)
{
i = n / div;
_putchar(i + '0');
count++;
n = n % div;
div = div / 10;
}
}
_putchar(o + '0');
count++;
return (count);
}
