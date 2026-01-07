#include <stdio.h>

int main (void)
{
  char input[256];
  int age;
  
  printf("What is your name, man?\n");
  scanf("%s", input);
  
  printf("Hello %s, how old are you?\n", input);
  scanf("%d", &age);

  printf("Well, %s you look young for %d...\n\n\n", input, age);

  // A Better way
  char input2[256], name2[256];
  int age2;
  
  printf("What is your name, man?\n");
  fgets(input2, 256, stdin);
  sscanf(input2, "%s", name2);

  printf("Hello %s, how old are you?\n", name2);
  while(1)
  {
    fgets(input2, 256, stdin);
    if (sscanf(input2, "%d", &age2) == 1) break;
    printf("I don't recognise that as an age - try again!\n");
  }

  printf("Well, %s, you look young for %d...\n", name2, age2);
}

