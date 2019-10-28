#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* getspecifier - finds the function for the specifier
* @x: the specifier in the string
* Return: pointer to function
*/
int(*getspecifier(char x))(va_list)
{
int i;
mystr p[] = {
{'c', print_c},
{'s', print_s},
{'i', _print_i},
{'d', _print_i},
{'r', print_rs},
{'\0', '\0'}
};
for (i = 0; p[i].letter; i++)
{
if (p[i].letter == x)
{
return (p[i].func);
}
}
return (0);
}
