#include<stdio.h>

// function parameters are "integer pointers".
// * is used here for declaring pointers
void swap(int*, int*);

int main(void)
{
  int a = 21;
  int b = 17;

  // converting integer to "intger pointer"
  // & is used here for referencing
  swap(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);

  return 0;
}

// * is used here for declaring pointers
// pa - pointer address of a
void swap(int *pa, int *pb)
{
  int t = *pa;
  *pa = *pb;
  *pb = t;

  // printing the address pointed by pa, pb
  // %p format specifier is for void* but pa is int*
  // So, pa is converted to void* and then passed to printf to fit
  // the format specifier
  printf("pointing address: a = %p, b = %p\n", (void*)pa, (void*)pb);


  // printing the address of pa, pb themselves
  // referencing them
  printf("pointer address of it selves: a = %p, b = %p\n", (void*)&pa, (void*)&pb);


  // * is used here for dereferencing the pointer to int.
  printf("swap: a = %d, b = %d\n", *pa, *pb);
}
