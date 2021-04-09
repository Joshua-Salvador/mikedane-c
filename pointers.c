#include <stdio.h>

int main()
{
  int num = 5;
  int *pointnum = &num;
  int *pointpointnum = *&pointnum;
  printf("%p\n", pointnum);
  printf("%p\n", pointpointnum);
  return 0;
}