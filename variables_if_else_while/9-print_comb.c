#include<stdio.h>

int main(void)
{
  int a;
  for (a = 48; a <= 57; a++)
  {
    putchar(a);

    if (a < 57)
    {
      putchar(44);
      putchar(32);
    }
  }

  return (0);
}
