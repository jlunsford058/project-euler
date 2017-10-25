#include "Euler.h"

int main(void)
{
  int sum = 0;

  for(int i = 3; i < 10001; i++)
  {
    int buffer = 0, buffer2 = 0;
    //find sum of first numbers divisors
    for(int k = 1; k < i; k++)
    {
      if(i % k == 0) buffer += k;
    }
    //find sum of derived second numbers divisors
    for(int k = 1; k < buffer; k++)
    {
      if(buffer % k == 0) buffer2 += k;
    }

    if(i == buffer2 && i != buffer) sum += i;

  }
  printf("The answer is %d", sum);
}
