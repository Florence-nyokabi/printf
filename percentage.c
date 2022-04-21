#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * percentage - function to check for '%' sign in a program
 * @param: integer to be printed
 * Return: 0 on success
 */

int percentage(__attribute__((unused))va_list param)
{
	_putchar('%');
	return (1);
}

