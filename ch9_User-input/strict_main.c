#include <stdio.h>

int main (int argc, char *argv[])
{
  int param = 0;
  while (param < argc)
  {
    printf("Parameter %d is %s\n", param, argv[param]);
    param++;
  }
  //return 0;

  // simple command line calculator
  int arg1, arg2;
  if (argc == 4)
  {
    sscanf(argv[1], "%d", &arg1);
    sscanf(argv[3], "%d", &arg2);
    if (*argv[2] == '+') printf("%d\n", arg1 + arg2);
    if (*argv[2] == '-') printf("%d\n", arg1 - arg2);
    if (*argv[2] == 'x') printf("%d\n", arg1 * arg2);
    if (*argv[2] == '/') printf("%d\n", arg1 / arg2);
  }

  return 0;
}

