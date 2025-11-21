#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
void print_name(char *name, void (*f)(char *))
{
    if (!name || !f)
    {
        return;
    }

    f(name);
}
