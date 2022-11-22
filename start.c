#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "_print.h"

int (*specific_format(const char *fm))(va_list li, char *string, int j)
{
	fun function[] =
	{
		/*{"s", get_s},*/
		{"c", get_c},
		/*{"i", get_d},*/
		/*{"d", get_d},*/
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

	buff = malloc(1024);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count++;
			buff[i] = format[i];
		}
		else
		{
			count += (*specific_format(&format[i + 1]))(li, buff, count);
		}
		i++;
	}
	write(1, buff, count);
	free(buff);
	va_end(li);
	return(count);
}
int main()
{
/*	char *p = "hola";*/
	char f = 'h';
	/*int i = 10;*/
	/*_printf("Hola mundo%s\n", *p);*/
	_printf("%c", 'H');
	/*_printf("%i", i);*/
	return(0);
}

