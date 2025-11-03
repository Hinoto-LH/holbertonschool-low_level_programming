#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c)
{

    while(*s)
    {
    if (*s == c)
        s++;
        return(s);
    }
    if (c == '\0')
       return(s);
        return(NULL);
}
