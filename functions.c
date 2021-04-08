#include <stdio.h>
/*  main function executes first
    need to know the return type
    void means it returns nothing
    must add function "prototype" if function is below main
    type must be specified in function parameters
*/

void sayHi();
void sayHiTo(char name[]);

int main()
{
  char name[20];
  sayHi();                // Call function
  fgets(name, 20, stdin); // can input line of text
  sayHiTo("Joshua");
  return 0;
}

void sayHi()
{
  printf("Hello User, What is your name?\n");
}

void sayHiTo(char name[])
{
  printf("Hello %s\n", name);
}