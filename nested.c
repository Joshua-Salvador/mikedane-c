#include <stdio.h>

int main()
{
  int limit;
  scanf("%d", &limit);
  int arr[limit][limit];

  for (int i = 0; i <= limit; i++)
  {
    for (int j = 0; j <= limit; j++)
    {
      arr[i][j] = j;
      printf("Iteration number %d -> %d\n", i, arr[i][j]);
    }
  }
  return 0;
}