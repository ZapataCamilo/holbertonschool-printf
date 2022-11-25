#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

int get_s(va_list li, char *string, int j)
{
	char *frase = va_arg(li, char *);
	int i = 0;
	char *nul = "(null)";

	if (frase == NULL)
	{
		while (i <= 6)
		{
		string[j] = nul[i];
		i++;
		j++;
		}
		return(6);
	}

	while (frase[i] != '\0')
	{
		string[j] = frase[i];
		i++, j++;
	}
	return (i);
}

int get_c(va_list li, char *string, int j)
{
	int ch = va_arg(li, int);
	string[j] = ch;
	j += 1;
	return (1);
}

int get_d(va_list li, char *string, int j)
{
	int frase = va_arg(li, int);
	int dev_itoa = itoa(frase, string, j);

	return(dev_itoa);
}

int actualget_d(char * numchar, char *string, int j)
{
    int i = 0;

    while (numchar[i] != '\0')
    {
        string[j] = numchar[i];
        i++, j++;
    }
    return (i);
}

