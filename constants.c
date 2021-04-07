#include <stdio.h>
#define CONSTANT 8

int main()
{
  const int num = 5; // declare a constant
  // num = 8; This is invalid
  printf("%i\n", num);
  printf("%i\n", CONSTANT);
  return 0;
}

// Constants are data or information that cannot be changed.