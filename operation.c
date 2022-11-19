#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "_print.h"

int get_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	while (str[i] < '\0')
		i++;
		write(1, &str, i);

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
	int n = 987654321;
	int j = n;
	int i = 1;

	do
	{
		j /= 10;

		if (n / 10 > 1)
			i++;

	} while (j / 10 != 0);

	return (i);
}
int get_i(va_list i)
{
	int num = 987654321;
	int d = num;
	int i = 1;

	do
	{
		d /= 10;

		if (num / 10 > 1)
			i++;
		
	} while (d / 10 != 0);
}
