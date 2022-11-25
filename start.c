#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int (*specific_format(const char *fm))(va_list li, char *string, int j)
{
	fun function[] =
	{
		{"s", get_s},
		{"c", get_c},
		{"i", get_d},
		{"d", get_d},
		{NULL, NULL}
	};

	int i = 0;

	while (function[i].type)
	{
		if (*fm == *function[i].type)
		{
			return(function[i].op);
		}
		i++;
	}
return(0);
}
/**
  * comentario
  * comentario2
  *
  *
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	char *buff;
	va_list li;

	va_start(li, format);

	if (!format)
		exit (1);

	buff = malloc(1691);

	if (buff == NULL)
		free(buff);

	while (format[i])
	{
		if (format[i] != '%')
		{
			buff[count] = format[i];
			count++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
			buff[count] = format[i];
			count++;
			}
			else if (!format [i + 1] || format[i + 1] == '\n')
			{
				break;
			}
			else if (format [i + 1] == 'c' || 'd' || 'i' || 's')
			{
			count += (*specific_format(&format[i + 1]))(li, buff, count);
			i++;
			}
		}
		i++;
	}
	write(1, buff, count);
	free(buff);
	va_end(li);
	return(count);
}

