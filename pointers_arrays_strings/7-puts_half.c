#include "main.h"

void puts_half(char *str)
{
	int length = 0;
	int n;

	while(str[length] != '\0')
	{
		length++;
	}
	n = (length + 1) / 2;
	
	while(n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

