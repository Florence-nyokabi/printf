#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * print_char - Function to get character variables
 * @char_list: characters to be printed
 * Return: char_list, list of character to be returned
 */

int print_char(va_list char_list)
{
	char c = va_arg(char_list, int);

	return (_putchar(c));
}

