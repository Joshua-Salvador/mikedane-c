#include <stdio.h>

int main()
{
  char grade;

  printf("Input grade:\n");
  scanf(" %c", &grade);

  switch (grade)
  {
  case 'A':
    printf("You aced the test.\n");
    break;
  case 'B':
    printf("You did really good.\n");
    break;
  case 'C':
    printf("You can do better.\n");
    break;
  case 'D':
    printf("You need to study harder.\n");
    break;
  case 'F':
    printf("You failed.\n");
    break;
  default:
    printf("I don't recognize that grade mark.\n");
    break;
  }

  return 0;
}