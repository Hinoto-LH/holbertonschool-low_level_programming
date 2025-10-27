#include "main.h"

void print_most_numbers(void)
{
	char num = 48;

	for ( ; num <= 57 ; num++)
	{
	if (num != 50 && num != 52)
	_putchar(num);
	}
	_putchar('\n');
}
