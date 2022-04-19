#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list str_list);
int print_char(va_list char_list);
int percentage(__attribute__((unused))va_list param);
int (*converter(char s))(va_list);

/**
 * struct format - structure
 * @F: char holding the format
 * @T: pointer function
 */

typedef struct format
{
	char F;
	int (*T)(va_list);
} fmt;

#endif /* MAIN_H */
