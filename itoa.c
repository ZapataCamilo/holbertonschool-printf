#include "main.h"
#include <stdlib.h>
/**
 *itoa - returns a string
 * @value: variadic arguments
 * @string: buffer to print
 * @j: length of buffer
 * Return: dev_acgd
 */
int itoa(int value, char *string, int j)
{
	int x = 0, y = 0, dev_acgd, n = abs(value), i = 0;
	char temp[1] = "0", numchar[20];
	char *alderecho = &temp[0]; /*pointer a la dirección del string temporal*/

	while (n)
	{int r = n % 10;
		numchar[i++] = 48 + r;
		n = n / 10;
	}
	if (i == 0)
		numchar[i++] = '0';

	if (value < 0)
		numchar[i++] = '-';
	numchar[i] = '\0';
	while (numchar[x])
	{
		x++; /*contar longitud string*/
	}
	for (y = 0; y < (x + 1) / 2 ; y++)
	{
		char *alreves = &numchar[y]; /*pointer con la direccion de s0*/
		*alderecho = numchar[y]; /*asigno s0 al temporal*/
		*alreves = numchar[x - (y + 1)]; /*llevo si-1 a s0*/
		numchar[x - (y + 1)] = alderecho[0]; /*llevo s0 a si-1*/
	}
	dev_acgd = actualget_d(numchar, string, j);
	return (dev_acgd);
}
