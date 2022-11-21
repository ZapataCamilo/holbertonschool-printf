#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "_print.h"

int get_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	while (str[i] != '\0')
	{

		write(1, &str[i], 1);
		i++;
	}

	return (i);

}
int get_c(va_list c)
{
	char ch = va_arg(c, int);
	write(1, &ch, 1);
	return (0);
}
int get_d(va_list d)
{
	int j = va_arg(d, int);
	int i = 1;

	do
	{
		j /= 10;

		if ((va_arg(d, int) / 10) > 1)
			i++;

	} while (j / 10 != 0);

	return (i);
}
/*int get_i(va_list i)
{
	int j = i;
	int k = 1;

	do
	{
		j /= 10;

		if (i / 10 > 1)
			k++;
		
	} while (j / 10 != 0);
	return (k);
}*/
