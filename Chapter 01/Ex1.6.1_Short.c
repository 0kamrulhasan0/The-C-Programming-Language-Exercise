#include <stdio.h>

int main()
{
  int c;
  //take input in c and checks if the character is EOF
  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
}
