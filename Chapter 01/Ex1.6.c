#include <stdio.h>

int main()
{
  int c;
  // EOF can be triggered using CTRL+D in Linux Terminal
  //                            CTRL+Z in Windows Terminal
  char value = ((c = getchar()) != EOF);
  printf("%d", EOF);

  while (value)
  {
    //Shows Enter as new line charater as ascii value 10
    printf("%d ", c);
    value = ((c = getchar()) != EOF);
  }

}
