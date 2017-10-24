#include <stdio.h>

int main (void)
{
  long sum = 5050 * 5050, sum_of_squares = 0;

  for(int i = 1; i <= 100; i++)
  {
    sum_of_squares += i * i;
  }

  printf("%d", sum - sum_of_squares);
}
