#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srandom (time (0));
  int randomnumber = random ();
  //printf("%d\n",randomnumber);

  if (randomnumber % 2 == 1)
  {
    printf("%d is odd\n",randomnumber);
  }

  else //if (randomnumber % 2 == 0)
  {
    printf("%d is even\n",randomnumber);
  }

  return 0;
}
