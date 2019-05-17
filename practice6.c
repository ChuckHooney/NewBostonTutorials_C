#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  float numberone;
  float numbertwo;
  char operation;
  float answer;

  printf("Please enter a number\n ");
  scanf("%f",&numberone);

  printf("Please enter another number\n ");
  scanf("%f",&numbertwo);

  printf("Please enter an operator\n");
  scanf(" %c",&operation);



  if (operation == '+')
  {
      answer = numberone + numbertwo;
  }

  else if (operation == '-')
  {
      answer = numberone - numbertwo;
  }

  else if (operation == '*')
  {
      answer = numberone * numbertwo;
  }

  else if (operation == '/')
  {
    if (numbertwo == 0)
    {
      printf("invalid input\n");

      return 0;
    }else{
      answer = numberone / numbertwo;

    }

  }
  printf("%f %c %f = %f\n",numberone,operation,numbertwo,answer);



  return 0;
}
