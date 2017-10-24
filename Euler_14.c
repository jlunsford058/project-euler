#include "Euler.h"

int main(void)
{
  int64_t number = 1, buffer = 1, count_buffer = 0;

  for(int i = 3; i < 1000000; i++)
  {
    buffer = i;
    int64_t count = 1;
    while(buffer != 1)
    {
      if(buffer % 2 == 0)
      {  buffer = buffer / 2;}
      else {buffer = (3 * buffer) + 1;}
      count++;
      //if(i == 113383) printf("%d \n", buffer);
    }

    if (count > count_buffer)
    {
      number = i;
      count_buffer = count;
    }
  //  printf("%d \n", i);
  }
  printf("The answer is %" PRIi64, number);
}
