#include <stdio.h>

double calc(char op, double num1, double num2);

int main()
{
  char op;
  double num1;
  double num2;

  printf("Select operand to use (+, -, *, /):\n");
  scanf(" %c", &op); // " %c", space needed to get char
  printf("Input first number:\n");
  scanf("%lf", &num1);
  printf("Input second number:\n");
  scanf("%lf", &num2);

  printf("Result is equal to: %f\n", calc(op, num1, num2));
  return 0;
}

double calc(char op, double num1, double num2)
{
  if (op == '+')
  {
    return num1 + num2;
  }
  else if (op == '-')
  {
    return num1 - num2;
  }
  else if (op == '*')
  {
    return num1 * num2;
  }
  else if (op == '/')
  {
    return num1 / num2;
  }
  else
  {
    printf("Invalid operator\n");
    return 0;
  }
}