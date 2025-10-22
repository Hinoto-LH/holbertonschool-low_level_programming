#include<stdio.h>

int main(void)
{
  for (int a = 48; a <= 57; a++)
  {
    putchar(a);

    if (a < 57)
    {
      putchar(44);
      putchar(32);
    }
    else
    {
      putchar(36);
    }
  }

  return (0);
}
