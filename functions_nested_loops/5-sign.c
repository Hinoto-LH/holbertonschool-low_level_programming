#include "main.h"

int print_sign(int n)
{
         if( n > 48 ) {
                 _putchar('+');
         return(1);
         }
         else if( n < 48) {
                 _putchar('-');
         return(-1);
         }
         else {
                 _putchar(48);
         return(0);
          }
}
