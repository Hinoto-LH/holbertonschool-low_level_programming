#include <stdio.h>

int main(void) {
  char* b = "0123456789abcdef";
  int i = 0;

  while (i <= 16) {
    putchar(b[i]);

    i++;
  }

  putchar('\n');

  return 0;
}
