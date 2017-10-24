#include <stdio.h>

int main (void)
{
  int test = 0, palindrome = 0, buffer = 0;

  for(int i = 999; i > 99; i--)
  {
    for(int j = 999; j > 99; j--)
    {
      test = i * j;
      buffer = test;
      int reversed = 0;
      while (buffer >= 1)
      {
        reversed = (reversed * 10) + (buffer % 10);
        buffer = buffer/10;
      }

      if ((test == reversed) && (test > palindrome)) palindrome = test;

    }
  }
  printf("Largest palindrome from multiplying 3 digit numbers is: %d", palindrome);
}
