#include <stdio.h>

int main()
{
  int c;
  double nc_sp = 0, nc_tab = 0, nc_nl = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      nc_sp++;
    }
    else if (c == '\t')
    {
      nc_tab++;
    }
    else if (c == '\n')
    {
      nc_nl++;
    }
  }

  printf("Number of Space: %.0f\n", nc_sp);
  printf("Number of Tab: %.0f\n", nc_tab);
  printf("Number of Newline: %.0f\n", nc_nl);
}
