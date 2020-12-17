#include <stdio.h>

int main() {
  printf("Fahrenheit\tCelsius\n");
  for(int fahr=0; fahr <= 300; fahr += 20) {
    float celsius = 5*(fahr-32.00)/9;
    printf("%9d\t%7.1f\n", fahr, celsius);
  }
}
