#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct funtions
{
	char *type;
	int (*op)(va_list, char *, int);
} fun;
/*int *specific_format(va_list li, char *string, int j, const char *fm);*/

int (*specific_format(const char *fm))(va_list li, char *string, int j);
int _printf(const char *format, ...);
int get_c(va_list li, char *string, int j);
int get_s(va_list li, char *string, int j);
int get_d(va_list li, char *string, int j);
int get_perc(va_list li, char *string, int j);
int itoa(int value, char *string, int j);
int actualget_d(char * numchar, char *string, int j);
#endif
