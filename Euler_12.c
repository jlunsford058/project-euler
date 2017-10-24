#include "Euler.h"

int main(void)
{
  long number = 0, count = 0, triangle_digit = 1;

  while(count < 502)
  {
    count = 0;
    number += triangle_digit;

    for(long i = 1; (i * i) < number; i++)
    {
      if(number % i == 0) count++;
    }

    triangle_digit++;
    count *= 2;
  }

  printf("The answer is %d", number);
}
