#include "main.h"
/**
 * get_d - returns a integer
 * @li: variadic arguments
 * @string: buffer to print
 * @j: length of buffer
 * Return: dev_itoa
 */
int get_d(va_list li, char *string, int j)
{
	int frase = va_arg(li, int);
	int dev_itoa = itoa(frase, string, j);

	return (dev_itoa);
}
/**
 * actualget_d - returns a string
 * @string: buffer to print
 * @numchar: return of itoa
 * @j: length of buffer
 * Return: j
 */
int actualget_d(char *numchar, char *string, int j)
{
	int i = 0;

	while (numchar[i] != '\0')
	{string[j] = numchar[i];
		i++, j++;
	}
	return (i);
}
