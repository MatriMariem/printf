#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 * struct mystr - pointer to function with corresponding letter
 * @letter: specifier
 * @func: print argument
 */
typedef struct mystr
{
	char *letter;
	int (*func)(va_list);
} mystr;
int _putchar(char c);
int _printf(const char *format, ...);
int(*getspecifier(const char *format, int i))(va_list);
/** fn in file : fn_char.c */
int print_c(va_list c);
int print_s(va_list s);
int print_S(va_list S);
int print_rs(va_list rs);
int print_rot(va_list ro);
/** fn in file : fn_numbers.c */
int _print_i(va_list vi);
int _print_b(va_list b);
/** fn in file : fn_uoxX.c */
int _print_u(va_list);
int _print_o(va_list);
int _print_x(va_list);
int _print_X(va_list);
int _print_p(va_list);

int strange(const char *format, int i);
int _plus_i(va_list);
int _space_i(va_list);
int _diez_o(va_list);
int _diez_x(va_list);
int _diez_X(va_list);
#endif
