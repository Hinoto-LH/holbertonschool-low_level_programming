#include "function_pointers.h"
#include <stdio.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    int index;

    if (size <= 0 || !cmp || array == NULL)
    {
        return -1;
    }

    for (index = 0; index < size; index++)
    {
        cmp(array[index]);
    }
    return array[index];
}
