#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
int index;

	for (index = 0; *s != '\0'; index++)
	{
	s++;
	}
return(index);
}
