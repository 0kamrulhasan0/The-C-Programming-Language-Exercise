#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  puts("Hello, World");//puts only prints but can't format strings.
  return EXIT_SUCCESS; //EXIT_SUCCESS macro is defined in <stdlib.h>
}


/*
 * C defines two possible execution environments:
 * 1) freestanding: No OS. Example: Embedded System.
 * 2) hosted: Normal Computer.
 */
