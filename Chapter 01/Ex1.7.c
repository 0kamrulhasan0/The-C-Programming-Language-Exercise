#include <stdio.h>

int main()
{
  double nc;
  for (nc = 0; getchar() != EOF ; ++nc);

  //%.0f suppresses the decimal point and digits after decimal point
  printf("\n%.0f", nc);
}
