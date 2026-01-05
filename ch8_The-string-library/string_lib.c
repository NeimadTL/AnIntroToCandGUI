#include <stdio.h>
#include <string.h>

int main (void)
{
  char str1[10] = "first";
  char str2[10] = "second";
  char str3[20];

  strcpy(str3, str1);
  strcat(str3, str2);

  printf("%s + %s = %s\n", str1, str2, str3);


  // strings comparison without library
  char name1[10] = "john";
  char name2[10] = "johnny";
  
  char *ptr1 = name1;
  char *ptr2 = name2;

  while(*ptr1 != 0 && *ptr2 != 0)
  {
    if(*ptr1 != *ptr2) break;

    ptr1++;
    ptr2++;
  }

  if (*ptr1 == 0 && *ptr2 == 0)
  {
    printf("The names %s and %s are identical\n", name1, name2);
  }
  else
  {
    printf("The names %s and %s are different\n", name1, name2);
  }


  // string comparison with library
  if (strcmp(name1, name2) == 0)
  {
    printf("The two names %s and %s are identical\n", name1, name2);
  }
  else
  {
    printf("The two names %s and %s are different\n", name1, name2);
  }


  // reading value from a string
  int val;
  char string[10] = "250";

  sscanf(string, "%d", &val);
  printf("The value in the string is %d\n", val);

  // reading valueS from a string
  char result[10];
  char another_string[25] = "The first number is 1";

  if (sscanf(another_string, "The %s number is %d", result, &val) == 2)
  {
    printf("String: %s Value : %d\n", result, val);
  }
  else
  {
    printf("I couldn't find two values in that string.\n");
  }
}

