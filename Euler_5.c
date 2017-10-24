#include <stdio.h>

int main (void)
{
  int loop = 1, divisor = 20;

  while (loop)
  {
    for(int i = 1; i <= 20; i++)
    {
      if(divisor % i != 0) break;

      if(i == 20) {
        printf("The answer is %d", divisor); 
        loop = 0;}
      }

    divisor += 20;
  }
}
