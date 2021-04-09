#include <stdio.h>
/*
  Dereferencing is getting the value stored in that address;
*/
int main()
{
  int num = 5;
  int *pointnum = &num;

  printf("%p\n", pointnum);
  // dereference
  printf("Dereference:\n");
  printf("%d\n", *pointnum);
  printf("%d\n", *&num);
  return 0;
}