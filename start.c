#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "_print.h"

int (*specific_format(const char *fm))(va_list li, char *string, int j)
{
	fun function[] =
	{
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
			buff[count] = format[i];
			count++;
		}
		else
		{
			count += (*specific_format(&format[i + 1]))(li, buff, count);
			i++;
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
    int len;
    int len2;
    unsigned int ui;
    void *addr;    
    
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	
	/*int n1 = 123;
	char *edad = "Edad:";
	_printf("Hola, mi %s es %d", edad, n1);*/
	return (0);
}

