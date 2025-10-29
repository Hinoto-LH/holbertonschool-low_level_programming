#include "main.h"

void print_square(int size)
{
int l, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (c = 0; c <= size; c++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}

}
