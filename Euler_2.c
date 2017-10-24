#include <stdio.h>

int main(void)
{
  long even_numbers = 0, fib1 = 1, fib2 = 2, buffer = 0;

  while (fib2 <= 4000000)
    {
      if((fib2 % 2) == 0)
        even_numbers += fib2;
      buffer = fib1 + fib2;
      fib1 = fib2;
      fib2 = buffer;
    }
    printf("The Sum is: %d", even_numbers);
}
