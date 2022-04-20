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
		{'c', print_char},
		{'s', print_str},
		{'%', percentage}
		{NULL, NULL}
	};

	int n = 0;

	for (; types_array[n].F != '\0'; n++)
	{
		if (types_array[i].F == s)
		{
			return (types_array[n].T);
		}
	}
	return (0)
}
