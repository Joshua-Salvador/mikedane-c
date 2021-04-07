#include <stdio.h>

int main()
{
  int age;
  double temp;
  char row;
  char name[20];

  printf("Enter your name:\n");
  //scanf("%s", name);
  fgets(name, 20, stdin); // can input line of text
  printf("Enter your age:\n");
  scanf("%d", &age);
  printf("Enter your temperature:\n");
  scanf("%lf", &temp);
  printf("Enter your assigned row:\n");
  scanf("%s", &row);

  printf("%s is %d years old and has a body temperature of %f. %s is seated at row %c.\n", name, age, temp, name, row);
  return 0;
}