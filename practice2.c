#include <stdio.h>

int main()
{
  printf("Enter one of the following numbers\n20\n15\n10\n5\nYour Number:");
  int age;
  scanf("%d",&age);
  //printf("%d\n",age);

  if(age == 20)
  {
    printf("20 is...\n");
    printf("-even\n");
    printf("-divisible by 5\n");
    printf("-divisible by 4\n");
    printf("-divisible by 2\n");
    printf("-divisible by 1\n");
  }

  if(age == 15)
  {
    printf("15 is...\n");
    printf("-odd\n");
    printf("-divisible by 5\n");
    printf("-divisible by 3\n");
    printf("-divisible by 1\n");
  }

  if(age == 10)
  {
    printf("10 is...\n");
    printf("-even\n");
    printf("-divisible by 5\n");
    printf("-divisible by 2\n");
    printf("-divisible by 1\n");
  }

  if(age == 5)
  {
    printf("5 is...\n");
    printf("-odd\n");
    printf("-divisible by 5\n");
    printf("-divisible by 1\n");
  }

  return 0;
}
