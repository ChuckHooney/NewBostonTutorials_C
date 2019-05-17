#include <stdio.h>

int main()
{
  printf("Enter a number\nYour Number:");
  int number;
  scanf("%d",&number);
  //printf("%d",number);

  if(number % 2 == 1)
  {
    printf("%d is odd\n",number);
  }

  else //(number % 2 == 0)
  {
    printf("%d is even\n",number);
  }

  if (number % 3 == 0)
  {
    printf("%d is divisible by 3\n",number);
  }

  if (number % 4 == 0)
  {
    printf("%d is divisible by 4\n",number);
  }

  if (number % 5 == 0)
  {
    printf("%d is divisible by 5\n",number);
  }

  printf("%d is divisible by 1\n",number);
  return 0;
}
