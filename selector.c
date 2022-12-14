#include "main.h"

/**
 * specific_format - points to a function
 * @fm: specifier
 * Return: 0
 */

int (*specific_format(const char *fm))(va_list li, char *string, int j)
{
	fun function[] = {
		{"s", get_s},
		{"c", get_c},
		{"i", get_d},
		{"d", get_d},
		{"%", get_perc},
		{NULL, NULL}
	};

	int i = 0;

	while (function[i].type)
	{
		if (*fm == *function[i].type)
		{
			return (function[i].op);
		}
		i++;
	}
	return (0);
}
