#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d and %d is greater than 5\n", n, x);
	}
	else if (n < 5)
	{
		printf("Last digit of %d and %d is less than 6 and not 5\n", n, x);
	}
	else
	{
		printf("Last digit of %d and %d is 0\n", n, x);
	}
	return (0);
}
