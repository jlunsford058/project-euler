#include <stdio.h>
#include <stdbool.h>
#include "Euler.h"

int main (void)
{
  long prime_number = 2, count = 0;

  while (count < 10001)
  {
    if(prime(prime_number) == true) count++;
    prime_number++;
  }
  prime_number--;

  printf("The answer is %d", prime_number);
}
