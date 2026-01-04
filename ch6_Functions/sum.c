#include <stdio.h>

int sum(int a, int b)
{
  int res;
  res = a + b;
  return res;
}

int sum_and_diff(int a, int b, int *res)
{
  int sum;
  sum = a + b;
  *res = a - b;
  return sum;
}

int main (void)
{
  int y = 2;
  int z = sum(5, y);

  printf("The sum of 5 and %d is %d\n", y, z);
  
  // use of pointer to passing data back to the calling function 
  int diff;
  printf("The sum of 5 and %d us %d\n", y, sum_and_diff(5, y, &diff));
  printf("The difference of 5 and %d is %d\n", y, diff);
}

