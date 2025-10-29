#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b)
{
int c = 0;

*a = *b;
*b = c;
c = *a;
}
