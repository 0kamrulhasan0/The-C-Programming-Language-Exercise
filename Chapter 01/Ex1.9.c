#include <stdio.h>
//page 18
int main()
{
  int c;
  int prev_c = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      if (prev_c != '\n')
      {
        putchar(c);
      }
    }
    else
    {
      putchar(c);
    }
    prev_c = c;
  }
  return 0;
}
