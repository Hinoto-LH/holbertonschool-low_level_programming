#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list par;

    unsigned int index;
    int param;

    va_start (par, n);

    for (index = 0; index < n; index++)
    {
        param = va_arg (par, int);
        printf ("%d", param);
        if (separator != NULL && index < n - 1) // "n - 1" pour annoncer la derniere iteration 
        {
            printf ("%s", separator);
        }
    }
    printf ("\n");
    va_end (par);
}
