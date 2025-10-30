#include "main.h"

void print_rev(char *s)
{
int p;

	for (p = 0; *s != '\0'; p++)
	{
		_putchar(*s);
		s++;	
	}
}
