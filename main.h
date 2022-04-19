#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 *
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int putchar (char c);
int _printf(const char *format, ...);
int print_i(va_list i);
int print_d(va_list d);
int print_R(va_list R);

#endif
