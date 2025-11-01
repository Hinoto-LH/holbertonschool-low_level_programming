#include "main.h"
#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
int i = 0;
int j = strlen(s) -1;
char k;

	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;

		i++;
		j--;
	}
}
