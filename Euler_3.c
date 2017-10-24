#include "Euler.h"


int main(void)
{
  long factor = 0;

  for(long i = 1; i <= 775146; i+=2)
  {
    if (600851475143 % i == 0)
    {
      if (prime(i) == true)
      {
        factor = i;
      }
    }
  }
  printf("Greatest prime factor of 600851475143 is: %d", factor);
}
