#include <stdarg.h>
#include "main.h"

/**
 * print_digit - function to get int variable
 * @int_list: variable list
 *
 * Return: integer
 */

int print_digit(va_list int_list)
{
	int n, division, length;
	unsigned int num;

	n = va_arg(int_list, int);
	division = 1;
	length = 0;

	if (n < 0)
	{
		length += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}

	for (; num / division > 9;)
	{
		division *= 10;
	}

	for (; division != 0;)
	{
		length += _putchar('0' + (num / division));
		num %= division;
		division /= 10;
	}

	return (length);
}
