#include "main.h"

void _puts(char *str)
{
int p;

	for(p = 0; str[p] != '\0'; p++)
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');
}
