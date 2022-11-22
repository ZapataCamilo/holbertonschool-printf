#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "_print.h"

/*int get_s(va_list nextarg, char *, int)
{
	int str = va_arg(nextarg, char *);
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = va_arg(nextarg[i], char);
			i++;
	}

	return (i);

}*/

int get_c(va_list li, char * string, int j)
{
	int ch = va_arg(li, int);
	string[j] = ch;
	j += 1;
	return (j);
}

/*int get_d(va_list d)
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
}*/
