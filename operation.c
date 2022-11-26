#include "main.h"
/**
 * case_selector - choose a function from descriptor
 * @s: descriptor
 * Return: 1 if true, 0 if fals
 */
int case_selector(char s)
{
if (s == 'd' || s == 'i' || s == 's' || s == 'c' || s == '%')
	return (1);
else
	return (0);
}
/**
 * get_s - returns a string
 * @li: variadic arguments
 * @string: buffer to print
 * @j: length of buffer
 * Return: j
 */
int get_s(va_list li, char *string, int j)
{
	char *frase = va_arg(li, char *);
	int i = 0;
	char *nul = "(null)";

	if (frase == NULL)
	{
		while (i <= 6)
		{string[j] = nul[i];
		i++, j++;
		}
		return (6);
	}
	while (frase[i] != '\0')
	{string[j] = frase[i];
		i++, j++;
	}
	return (i);
}
