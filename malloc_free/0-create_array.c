#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
    char *tab;
    unsigned int i = 0;

    if (size == 0)
    {
        return NULL;
    }

    tab = malloc(sizeof(char) * size);

    if (tab == NULL)
    {
        exit(1);
        return(0);
    }

    for (i = 0; i < size; i++)
    {
        tab[i] = c;
    }

    return tab;
}
