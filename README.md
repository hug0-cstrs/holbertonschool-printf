<h1>_printf</h1>

_printf is a custom implementation of the C programming function printf.

<b>Prototype:</b> int _printf(const char *, ...);

<h2>Examples</h2>

<h3>String</h3>

- <b>Input:</b> _printf("%s\n", 'Hello World');
- <b>Output:</b> Hello World.

<h3>Character</h3>

- <b>Input:</b> _printf("The first letter of Hello World is %c\n", 'H');
- <b>Output:</b> The first letter of Hello World is H

<h3>Integer:</h3>

- <b>Input:</b> _printf("I'm %i years old\n", 25);
- <b>Output:</b> I'm 25 years old

<h3>Decimal:</h3>

- <b>Input:</b> _printf("%d\n", 2000);
- <b>Output:</b> 2000

<h2>Project Requirements</h2>

- All files will be compiled on Ubuntu 20.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
- Code must follow the Betty style
- Global variables are not allowed
- Authorized functions and macros:
	- write (man 2 write)
	- malloc (man 3 malloc)
	- free (man 3 free)
	- va_start (man 3 va_start)
	- va_end (man 3 va_end)
	- va_copy (man 3 va_copy)
	- va_arg (man 3 va_arg)

<h2>Mandatory Tasks</h2>

- Write function that produces output with conversion specifiers c, s, and %.
- Handle conversion specifiers d, i.
- Create a man page for your function.


<h2>File Descriptions</h2>

- <b>_printf.c:</b>  contains the function _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.

- <b>_putchar.c:</b> contains the function _putchar, which writes a character to stdout.

- <b>main.h:</b> contains all function prototypes used for _printf.

- <b>_man_3_printf:</b> manual page for the custom _printf function.

- <b>_printf_functions.c:</b> contains the functions _print_char and _print_str which handle the conversion specifiers c and s, respectively. <br/>Contains the functions _print_p, which print a percent.

- <b>numbers_printf_functions.c:</b> contains the functions longueur_int, which determine the lenght of a int. <br/> contains the functions _print_decimal, which print the decimal.


<h2>Authors</h2>

- Hugo Castéras <a href="https://github.com/hug0-c">@hug0-c</a>
- Valentin Ralliard <a href="https://github.com/Pizzayolow">@Pizzayolow</a>

