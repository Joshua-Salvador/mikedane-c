#include <stdio.h>

int main()
{
  int secret = 25;
  int guess;
  int guessCount = 0;
  int limit = 3;
  int noGuess = 0;

  while (guess != secret && noGuess == 0)
  {
    if (guessCount < limit)
    {
      printf("Guess a number:\n");
      scanf("%d", &guess);
      guessCount++;
    }
    else
    {
      noGuess = 1;
    }
  }
  if (noGuess == 0)
  {
    printf("You got it right!\n");
  }
  else
  {
    printf("You lost and ran out of guesses.\n");
  }

  return 0;
}