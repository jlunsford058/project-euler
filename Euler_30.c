#include "Euler.h"

int main(void)
{
  int sum = 0;
  for(int i = 3; i < 1000000; i++)
  {
    int buffer = i;
    int sum_of_digits = 0;
    while(buffer != 0)
    {
      int digit = buffer % 10;
      sum_of_digits += (int) pow(digit, 5);
      buffer /= 10;
    }
    if (sum_of_digits == i) sum += sum_of_digits;
  }
  printf("The answer is %d", sum);
}
