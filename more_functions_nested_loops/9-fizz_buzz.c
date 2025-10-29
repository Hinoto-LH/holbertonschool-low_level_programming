#include <stdio.h>

int main(void)
{
int num;

	for (num = 1; num <= 100; num++)
	{
		printf(" %d", num);
		if (num %3 && num %5)
		{
			printf("FizzBuzz");
		}
		else if (num %5)
		{
			printf("Buzz");
		}
		else if (num %3)
		{
			printf("Buzz");
		}
	}
	return(0);
}
