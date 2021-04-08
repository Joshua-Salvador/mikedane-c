#include <stdio.h>

/*
  Return statements return values
  Functions can return values which can be stored in a variable or do some other operation
  Like in most programming languages, return statements break out of functions
*/

float cube(float num);

int main()
{
  float num;
  printf("Input a number:\n");
  scanf("%f", &num);
  printf("%f cubed = %f\n", num, cube(num));
  return 0;
}

float cube(float num)
{
  return num * num * num;
}