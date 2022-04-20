#include "main.h"

/**
 * converter - pointer to function
 * @s: formats
 *
 * Return: function pointer named int(*)(va_list)
 */

int (*converter(char s))(va_list)
{
	fmt types_array[] = {
		{'d', print_digit},
		{'i', print_digit},
		{'c', print_char},
		{'s', print_str},
		{'%', percentage},
		{'\0', NULL}
	};

	int n = 0;

	for (; types_array[n].F != '\0'; n++)
	{
		if (types_array[n].F == s)
		{
			break;
		}
	}
	return (types_array[n].T);
}
