#include <stdio.h>

int main(void)
{
  int a;
  int *ptr_to_a;
  
  ptr_to_a = &a;
  
  a = 5;
  printf("The value of a is %d\n", a);

  *ptr_to_a = 6;
  printf("The value of a is %d\n", a);
  
  // couldn't find another way to do it than using the `p`
  // specifier and casting it with `(void *)`
  printf("The value of ptr_to_a is %p\n",(void *) ptr_to_a);
  printf("It stores the value %d\n", *ptr_to_a);
  printf("The address of a is %p\n",(void *) &a);

  // casting following the book's code
  int intval = 345678987;
  void *vptr = &intval;

  printf("The value at vptr as an int is %d\n", *((int *) vptr));
  printf("The value at vptr as a char is %d\n", *((char *) vptr));
}

