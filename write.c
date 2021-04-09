#include <stdio.h>

/*
  File modes:
    r - read
    w - write
    a - append
*/

int main()
{
  // FILE *fpointer = fopen("crushes.txt", "w"); // Create pointer to physical file in machine
  FILE *fpointer = fopen("crushes.txt", "a");
  // fprintf(fpointer, "Kelsey\nKorean Girl\nIsabel\nFranz\nSophie");
  fprintf(fpointer, "\nEvaughn");

  fclose(fpointer); // Close file
  return 0;
}