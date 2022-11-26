#include "main.h"

/**
 * get_c - returns a character
 * @li: variadic arguments
 * @string: buffer to print
 * @j: length of buffer
 * Return: j
 */
int get_c(va_list li, char *string, int j)
{
int ch = va_arg(li, int);
string[j] = ch;
j += 1;
return (1);
}
