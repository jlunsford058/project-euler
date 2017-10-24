#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

bool prime (long factor)
{
  bool prime = true;
    for(long i = 2; (i * i) <= factor; i++)
    {
      if (factor % i == 0)
        return false;
    }
  return true;

}
