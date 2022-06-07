#include <stdio.h>

int main()
{
  /*
   * Characters are stored as integer because even though english
   * characters can be stored in as char, EOF (End of File) is too
   * big to store in char along with any other value.
  */
  int c;
  c = getchar();

  //if checks if the character is EOF.
  while (c != EOF)
  {
    //converts the string to output stream
    //same as below - putc(c, stdout);
    putchar(c);
    c = getchar();
  }
}
