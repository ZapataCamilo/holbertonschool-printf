#include "main.h"
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

	if (buff == NULL || format == NULL || (format[0] == '%' && format [1] == '\n'))
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			buff[count] = format[i];
			count++;
		}
		else if (format[i] == '%' && case_selector(format[i + 1]) == 1)
		{
			count += (*specific_format(&format[i + 1]))(li, buff, count);
			i++;	
		}
		else
		{
			buff[count] = format[i];
			count++;
		}
		i++;
	}
	write(1, buff, count);
	free(buff);
	va_end(li);
	return(count);
}
