#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  int answer;

  printf("Please enter a value\n");
  int numberone;
  scanf("%d",&numberone);

  printf("Please enter another value\n");
  int numbertwo;
  scanf("%d",&numbertwo);

  printf("Please enter one more value\n");
  int numberthree;
  scanf("%d",&numberthree);

  if(numberone % 2 == 1)//odd
  {
    answer = numbertwo + numberthree;
    printf("%d + %d == %d",numbertwo,numberthree,answer);
  }

  if(numberone % 2 == 0)//even
  {
    answer = numbertwo * numberthree;
    printf("%d x %d == %d\n",numbertwo,numberthree,answer);
  }

  return 0;
}
