#include "main.h"
#include <stdlib.h>

/**
 * _print R -  prints the rot13'ed string
 *
 * Return: chars printed
 */

int print_R(va_list R)
{
	char *str;
	unsigned int a, b;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (a = 0; str[a]; a++)
	{
		for (b = 0; in[b]; b++)
		{
			if (in[b] == str[a])
			{
				_putchar(out[b]);
				count++;
				break;
			}
		}
		if (!in[b])
		{
			_putchar(str[a]);
			count++;
		}
	}
	return (count);
}
