#include "main.h"

/**
 * _printf - the printf fonction
 * @format: string of format to use and print
 * Return: the lenght of the format
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, nbpr = 0;
	type_print storage[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_decimal},
		{"i", _print_decimal},
		{"%", _print_p},
		{'\0', NULL}
	};
	va_list arg;

	va_start(arg, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; storage[j].type_arg != 0; j++)
			{
				if (format[i + 1] == *storage[j].type_arg)
				{
					nbpr += storage[j].fp(arg);
					i++;
					break;
				}
				if (storage[j + 1].type_arg == NULL)
				{
					nbpr += write(1, &format[i], 1);
				}
			}
		}
		else
			nbpr += write(1, &format[i], 1);
	}
	va_end(arg);
	return (nbpr);
}
