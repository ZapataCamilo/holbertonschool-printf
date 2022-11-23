#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "_print.h"
#include <string.h>

int get_s(va_list li, char *string, int j)
{
	char *frase = va_arg(li, char *);
	int i = 0;

	while (frase[i] != '\0')
	{
		string[j] = frase[i];
		i++, j++;
	}
	return (j);
}

int get_c(va_list li, char *string, int j)
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
