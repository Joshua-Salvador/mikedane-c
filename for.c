#include <stdio.h>

int main()
{
  int num[10];
  for (int i = 0; i <= 5; i++)
  {
    num[i] = i;
    printf("%d\n", num[i]);
  }
  return 0;
}