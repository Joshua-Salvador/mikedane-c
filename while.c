#include <stdio.h>

int main()
{

  int index = 1;
  while (index <= 5)
  {
    printf("Loop\n");
    index++;
  }

  do
  {
    printf("Do\n");
    index++;
  } while (index < 1);

  return 0;
}