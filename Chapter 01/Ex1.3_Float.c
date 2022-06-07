#include <stdio.h>

int main()
{
  printf("Fahrenheit\tCelsius\n");
  for (int fahr = 0; fahr <= 300; fahr += 20)
  {
    float celsius = 5 * (fahr - 32.00) / 9;
    //%9d     = Decimal integer at least 9 character wide
    //%07.1f  = Atleast 7 character wide of space with filling the empty part with leading 0 and 1 digit after decimal
    printf("%9d\t%07.1f\n", fahr, celsius);
  }
}
