#include <stdio.h>
int main()
{
  int numbers[] = {2, 4, 6};
  numbers[0] = 3;

  int limit[10];
  limit[0] = 1;
  limit[1] = 2;
  limit[2] = 3;
  limit[3] = 4;
  limit[4] = 5;
  limit[5] = 6;
  limit[6] = 7;
  limit[7] = 8;
  limit[8] = 9;
  limit[9] = 10;
  printf("%d\n", numbers[0]);
  printf("%d\n", limit[5]);
  return 0;
}
/*
  Arrays are a kind of data structure that can carry multiple pieces of data or information.
  Like most programming languages, array starts at index 0.
  Strings are basically an array of characters.
*/