#include"main.h"
{
    char print_alphabet_x10;
    char print;
		for(print_alphabet_x10='0'; print_alphabet_x10 <= '9'; print_alphabet_x10++) {
		    putchar(print_alphabet_x10);
            for(print = 'a'; print <= 'z'; print++) {
                putchar(print);
            }
            
         putchar('\n');   	
		}
}
