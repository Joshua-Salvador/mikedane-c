/*
  Not much different from other programming languages.
*/

#include <stdio.h>

int getMax(int num1, int num2, int num3);

int main()
{
  int num1, num2, num3;
  printf("Input first number:\n");
  scanf("%d", &num1);
  printf("Input second number:\n");
  scanf("%d", &num2);
  printf("Input third number:\n");
  scanf("%d", &num3);

  printf("%i is the max value.\n", getMax(num1, num2, num3));

  return 0;
}

int getMax(int num1, int num2, int num3)
{
  if (num1 >= num2 && num1 >= num3)
  {
    return num1;
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    return num2;
  }
  else
  {
    return num3;
  }
}