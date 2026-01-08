#include <stdio.h>

int main (void)
{
  FILE *fp;
  int value;

  fp = fopen("output.txt", "wb");

  if(fp)
  {
    for (value = 48; value < 58; value++)
    {
      fputc(value, fp);
    }
    fclose(fp);
  }

  // the for loop on line 7 could have been replaced by the line below
  // fprintf(fp, "123456789");
  // this is more convinient for writing text to a file
}
