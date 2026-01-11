#include <stdio.h>

#define PI 3.14159
#define ADD(a,b) (a+b)

int main (void)
{
  // use of #define constant
  float rad = 3;
  float circ = rad * 2 * PI;
  float area = rad * rad * PI;
  printf("The circumference of a circle radius %f is %f\n", rad, circ);
  printf("The area of a circle radius %f is %f\n", rad, area);


  // use of #define function
  printf("The sum of %d and %d is %d\n", 5, 2, ADD(5, 2)); 
  printf("The sum of %d and %d is %d\n", 8, 10, ADD(8, 10));


  // use of #if directive
  #if 0
    printf("THIS IS NOT EXECUTED");
  #else
    printf("THIS IS EXECUTED");
  #endif

}

