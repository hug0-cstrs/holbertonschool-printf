#include "main.h"
/**
 * _print_decimal - function that print in the sdtout the decimal and the int
 * @arg: the number or the variable who wants to print
 * Return: the number of printed characters
 */
int _print_decimal(va_list arg)
{
	unsigned int count;
	long int n, aux, num, abs;

	count = 0;
	n = va_arg(arg, int);

	if (n < 0)
	{
		abs = (n * -1);
		count += _putchar('-');
	}
	else
	{
		abs = n;
	}

	aux = abs;
	num = 1;

	while (aux > 9)
	{
		aux /= 10;
		num *= 10;
	}

	while (num >= 1)
	{
		count += _putchar(((abs / num) % 10) + '0');
		num /= 10;
	}

	return (count);
}
