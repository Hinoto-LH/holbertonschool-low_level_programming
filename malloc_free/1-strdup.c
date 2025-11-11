#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
    if (str == NULL)
    {
        return (NULL);
    }

    char *new;
    unsigned int len, index;

    while (str[len] != '\0')
    {
        len++;
    }

    new = malloc(sizeof(char) * (len + 1));

    if (new == NULL)
    {
        return (NULL);
    }

    while (index <= len)
    {
        new[index] = str[index];

        index++;
    }
    
    new[10] = '\0';

    return (new);
}
