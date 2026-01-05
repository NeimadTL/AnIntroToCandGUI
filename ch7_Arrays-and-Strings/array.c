#include <stdio.h>

int main (void)
{
  int a[10];
  int i;

  for (i = 0; i < 10; i++)
  {
    a[i] = i * 10 + i;
  }
  
  printf("The first and second elements of a are %d and %d\n", a[0], a[1]);
  printf("Or, as pointers, %d and %d\n", *a, *(a+1));

  // array can also be initialised as the line below
  int new_array[10] = { 0, 11, 22, 33, 44, 55, 66, 77, 88, 99 };

  // strings
  char str1[10] = "first";
  char str2[10] = "second";
  char str3[20];

  char *src, *dst;
  
  src = str1;
  dst = str3;
  while (*src != 0)
  {
    *dst = *src;
    src++;
    dst++;
  }
  
  src = str2;
  while(*src != 0)
  {
    *dst = *src;
    src++;
    dst++;
  }

  *dst = 0;
  
  printf ("%s + %s = %s\n", str1, str2, str3);

  // sprintf
  int val = 12;
  char string[50];

  sprintf(string, "The value of val is %d\n", val);
  printf("%s", string);
}

