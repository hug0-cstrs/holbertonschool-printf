#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct type_print
{
	char *type_arg;
	int (*fp)(va_list);
} type_print;

int _print_char(va_list arg);
int _print_str(va_list arg);
int _print_p(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
int longueur_int(int number);
int _print_decimal(va_list arg);
int putint(long int number);

#endif
