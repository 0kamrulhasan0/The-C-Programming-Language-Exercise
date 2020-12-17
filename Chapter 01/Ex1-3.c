#include <stdio.h>
int main() {
  int lower = 0;
  int upper = 300;
  int step = 20;
  int fahr = lower;
  printf("Fahrenheit\tCelsius\n");
  while(fahr <= upper) {
    int celsius = 5*(fahr-32)/9;
    printf("%d\t\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
