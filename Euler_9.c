#include <stdio.h>

int main (void)
{
  for(int i = 1; i < 1000; i++)
  {
    for(int j = 1; j < 500; j++)
    {
      for(int k = 1; k < 500; k++)
      {
        if((i + j + k) == 1000)
          if(((i*i) + (j*j)) == (k*k))
          {
            printf("The Answer is %d", (i * j * k));
            goto *22;
          }
      }
    }
  }
}
