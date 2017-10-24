#include "Euler.h"

int main(void)
{
  int64_t factorial = 1, sum = 0, buffer = 0;

  for(int i = 1; i <= 100; i++)
  {
    factorial *= i;
    printf("%d \n", factorial);
  }
  while(factorial > 1)
  {
    buffer += (factorial % 10);
    factorial / 10;
    //printf("%d", buffer);
  }
  printf("%d", buffer);
}
