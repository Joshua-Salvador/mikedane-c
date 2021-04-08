#include <stdio.h>
#include <string.h>

struct Student
{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main()
{
  struct Student student1; // initialize struct
  student1.age = 18;
  student1.gpa = 2.5;
  strcpy(student1.name, "Joshua"); // must include string.h for strcpy
  strcpy(student1.major, "Engineering");

  printf("%s is %d years old. He or she is a/an %s major with a gpa of %f.\n", student1.name, student1.age, student1.major, student1.gpa);
  return 0;
}