#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
int i = 0;
int j = 0;
char k;

	while(s[j] != '\0')
	{
		j++;
	}
	j--;


	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;

		i++;
		j--;
	}
}
