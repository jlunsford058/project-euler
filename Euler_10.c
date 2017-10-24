#include "Euler.h"

int main(void)
{
  int64_t sum = 1;
  for(int i = 1; i < 2000000; i+=2)
  {
    if(prime(i) == true) sum += (int64_t) i;
    //printf("%d \n", i);
  }
  printf("The answer is %" PRIi64, sum);
}
