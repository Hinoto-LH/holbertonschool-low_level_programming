#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
       	printf(" %d \n", n);
	if(n > 0)
	{
		printf("the number is positif\n");
	}
	else if(n > 0)
		{
			printf("the number is negative\n");
		}
	else
	{
		printf("the number is 0\n");
	}
	return (0);
}
