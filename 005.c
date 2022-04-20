#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * print_str - gets the character array
 * @str_list: The string to be printed
 * Return: The string
 */

int print_str(va_list str_list)
{
	int n = 0;
	char *s = va_arg(str_list, char *);

	for (; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	return (n);
}
