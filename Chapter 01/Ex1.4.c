#include <stdio.h>

int main()
{
  printf("Celsius\tFahrenheit\n");
  for (float celsius = -17.8; celsius <= 148.9; celsius += 11.2)
  {
    int fahr = (celsius * 9 / 5) + 32.00;
    printf("%5.1f\t%9d\n", celsius, fahr);
  }
}
