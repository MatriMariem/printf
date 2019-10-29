./"This is the manpage of the _printf project in Holberton School
.TH _PRINTF 3 "29 October 2019" "0.10" "_printf man page"

.SH NAME
.B _printf
- Formatted output conversion.
.SH SYNOPSIS
.B #include "holberton.h"
.B int _printf(const char *
.I format
.B , ...)

.SH DESCRIPTION
.B _printf()
Prints to standard output the
.B format
string, interpreting
.B ‘%’
directives to format numeric and string arguments in a way that is mostly similar to the
.B C ‘printf’ function.
.SH The conversion specifiers
.IP %%
prints a single %
.IP %c
prints the next argument of type Char (int argument is converted to a character)
.IP %s
prints the next argument of type Char * // pointer to a string
.IP %i OR %d
prints the next argument of type int
.IP %b
The unsigned int argument is converted to unsigned binary notation then printed
.IP %u
The unsigned int argument is converted to unsigned decimal notation then printed
.IP %o
The unsigned int argument is converted to unsigned octal notation then printed
.IP %x
The unsigned int argument is converted to unsigned lowercase hexadecimal notation then printed
.IP %X
The unsigned int argument is converted to unsigned uppercase hexadecimal notation then printed
.IP %S
Prints a string. Non printable characters are printed as "\x" followed by their ASCII values in two digit hexadecimal
.IP %r
prints the reversed string
.IP %R
prints the Rot13'ed string
.IP %p
Address is printed in hexadecimal
.PP NOTE: a single % at the end of FORMAT string is interpreted as error.
.PP NOTE: a single % followed by unknown specifier is not interpreted.
.SH RETURN VALUE
.B _printf
returns the number of printed characters.
.SH SEE ALSO
.I printf(3)
.SH BUGS
No known bugs.
.SH AUTHOR
Taieb Chaabini, Mariem Matri
