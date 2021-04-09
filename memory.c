#include <stdio.h>

/*
  %p is the format to print out memory address
  *&var is the same as var when referring variables
*/

int main()
{
  int num = 2;
  printf("%d is stored at %p\n", *&num, &num);
  return 0;
}