#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP  20

int main()
{
  int fahr = LOWER;
  printf("Fahrenheit\tCelsius\n");
  while (fahr <= UPPER)
  {
    int celsius = 5 * (fahr - 32) / 9;
    printf("%d\t\t%d\n", fahr, celsius);
    fahr = fahr + STEP;
  }
}
