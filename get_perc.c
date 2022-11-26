#include "main.h"

/**
 * get_perc - returns a integer
 * @li: variadic arguments
 * @string: buffer to print
 * @j: length of buffer
 * Return: j
 */
int get_perc(va_list __attribute__((unused)) li, char *string, int j)
{
	string[j] = '%';
	j++;
	return (1);
}
