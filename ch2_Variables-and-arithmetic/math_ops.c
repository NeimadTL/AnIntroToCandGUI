#include <stdio.h>

int main (void)
{
  int a;
  int b = 3;
  int c;
  
  a = 2;
  c = a + b;
  printf("The sum of adding %d and %d is %d\n", a, b, c);

  // to see the result with floating-point numbers, change
  // a, b, c types to to `float` and the change the format
  // speciafiers of the printf function from `%d` to `%f`.
}

