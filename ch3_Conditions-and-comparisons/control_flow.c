#include <stdio.h>

int main (void)
{
  int a = 0;

  // control flow with if statement
  if (a == 0)
  {
    printf("a is equal to 0\n");
  }
  else
  {
    printf("a is not equal to 0\n");
  }

  // control flow with while loop
  while (a < 5)
  {
    printf("a is equal to %d\n", a);
    a++;
  }
  printf("a is equal to %d and I'm done\n", a);

  // control flow with do-while loop
  a = 0;
  do 
  {
    printf("a is equal to %d\n", a);
    a++;
  } while (a < 5);
  printf ("a is equal to %d and I'm done", a);
}
 
