#include <stdio.h>

int main (void)
{
  int a;

  for (a = 0; a < 5; a++)
  {
    printf("a si equal to %d\n", a);
  }
  printf("a is equal to %d and I'm done\n", a);

  // switch statement
  a = 0;
 switch (a)
  {
    case 0 : printf("a is equal to 0\n");
    break; 
    case 1 : printf("a is equal 1\n");
    break;
    default :printf("a is greater than 1\n");
  }

  // break statement
  a = 0;
  while (1)
  {
    printf("a is equal to %d\n", a);
    a++;
    if (a == 5)
    {
      break;
    }
  }
  printf("a is equal to %d and I'm done\n", a);
}

