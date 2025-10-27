#include "main.h"

void more_numbers(void)
{
	         int b;
	         int nums;
		 int mod;
	        for(b = 0; b <= 9; b++)
	        {
	          for(nums = 0; nums <= 14 ; nums++)
	          {
			  mod = nums %10;
	          if(nums > 9)
	         _putchar('1');
	          _putchar('0' + mod);

	        }
	         _putchar('\n');
	         }

}
