#include "function_pointers.h"
#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    int index;

    if (!cmp || array == NULL || size <= 0)
    {
        return -1;
    }

    for (index = 0; index < size; index++)
    {
        if (cmp(array[index]))
    return index;
    }
    return -1;
}
