#include "_print.h"
#include <stdlib.h>

int itoa(int value, char *string, int j)
{
int len = value;
int h = 1;
int devito;

do {len /= 10;
if (value / 10 > 1){
  h++;}
} while (len/ 10 != 0);
   
    int n = abs(value);
    int i = 0;
    char numchar[10];
   
    while (n)
    {
        int r = n % 10;
        numchar[i++] = 48 + r;
    
    n = n / 10;
    }    
    if (i == 0) {
        numchar[i++] = '0';
       }
    
    if (value < 0) {
        numchar[i++] = '-';
    }
    
    numchar[i] = '\0';

    int x = 0;
    int y = 0;
    char temp[1] = "0";/*string temporal*/
    char *alderecho = &temp[0]; /*pointer a la dirección del string temporal*/

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
actualget_d(numchar, string, j);
}
