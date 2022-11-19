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
	int index = va_arg(d, int);
	int inicio = 0;


}
