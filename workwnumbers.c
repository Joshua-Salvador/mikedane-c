#include <stdio.h>
#include <math.h>

int main()
{
  /* %f formatter for decimal numbers;
      "+", "-", "*", "/" - arithmetic operations
      pow(base, exponent) returns floating point
      sqrt(36) returns floating point
      ceil(num) round up, returns floating point
      floor(num) round down, returns floating point
   */

  // printf("%d -> Returns a weird number.\n", 5.01 + 3);
  printf("%f -> Returns correct answer.\n", 5.01 + 3);
  printf("%d\n", 5 / 4);
  printf("%f\n", 5.0 / 4.0);
  printf("%f\n", pow(2, 2));
  return 0;
}