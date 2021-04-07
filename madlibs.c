#include <stdio.h>

int main()
{

  char color[20];
  char plnoun[20];
  char personF[20];
  char personL[20];
  printf("Enter a color:\n");
  scanf("%s", color);
  printf("Enter a plural noun:\n");
  scanf("%s", plnoun);
  printf("Enter a person's first name:\n");
  scanf("%s", personF, personL);

  printf("Roses are %s,\n", color);
  printf("Violets are %s,\n", plnoun);
  printf("I love %s %s!\n", personF, personL);
  return 0;
}