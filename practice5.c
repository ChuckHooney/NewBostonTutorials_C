#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  printf("Guess a number from 0-10\nYour Number:");

  srandom (time (0));
  int randomnumber = random ();
  int specificrandom = randomnumber % 11 ;
  //printf("%d\n",specificrandom);

  int guess;
  scanf("%d",&guess);

  if (guess < 0)
  {
    printf("invalid answer\n");
    return 0;
  }

  if (guess > 10)
  {
    printf("invalid answer\n");
    return 0;
  }

  if (guess == specificrandom)
  {
    printf("You are correct!!!\n");
  }

  else //if (guess != specificrandom)
  {
    printf("You are Wrong!!!\n");
    printf("%d is the correct answer\n",specificrandom);
  }

  return 0;
}
