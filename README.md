# _printf - format and print data

This is our printf function recoded from scratch, for education purpose.

## Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
## Custom functions prototypes
* int \_putchar(char c);
* int \_printf(const char \*format, ...);
* int(\*getspecifier(char))(va\_list);
### Functions in file (fn\_char.c) :
* int print_c(va\_list c);
* int print_s(va\_list s);
* int print_S(va\_list S);
* int print\_rs(va\_list rs);
* int print\_rot(va\_list ro);
### Functions in file (fn\_numbers.c) :
* int _print_i(va_list vi);
* int _print_b(va_list b);
### Functions in file (fn_uoxX.c) :
* int _print_u(va_list u);
* int _print_o(va_list o);
* int _print_x(va_list o);
* int _print_X(va_list o);
* int _print_p(va_list p);
