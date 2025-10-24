#include"main.h"

void print_alphabet_x10(void)
{
    char print_alphabet_x10;
    char print;
		for(print_alphabet_x10='0'; print_alphabet_x10 <= '9'; print_alphabet_x10++) {
            for(print = 'a'; print <= 'z'; print++) {
                _putchar(print);
            }
            
         _putchar('\n');   	
		}
}
