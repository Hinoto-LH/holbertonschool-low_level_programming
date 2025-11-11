#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
    char *new;
    unsigned int len = 0, len2 = 0, index = 0, index2 = 0;

    if (s1 != NULL)
    {
        while (s1[len] != '\0')
        {
            len++;
        }
    }

    if (s2 != NULL)
    {
        while (s2[len2] != '\0')
        {
            len2++;
        }
    }

    new = malloc(sizeof(char) * (len + len2 + 1));

    if (new == NULL)
    {
        return (NULL);
    }

    if (s1 != NULL)
    {
        for (index = 0; index < len; index++)
        {
            new[index] = s1[index];
        }
    }

    if (s2 != NULL)
    {
        for (index2 = 0; index2 < len2; index2++)
        {
            new[index + index2] = s2[index2];
        }
    }

    return (new);
}
