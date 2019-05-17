#include<stdio.h>

int main()
{
  printf("Enter your age\n");
  int age;
  scanf("%d",&age);
  //printf("%d\n",age);



if(age >= 100)
{
 printf("You are very old\n");
}

else if(age >= 70)
{
 printf("think about retirment\n");
}

else if(age >= 50)
{
 printf("enjoy life\n");
}

else if(age >= 40)
{
 printf("you are working\n");
}

else if(age >= 30)
{
 printf("you are having a midlife crisis\n");
}

else if(age >= 20)
{
 printf("you are a college student\n");
}

else if(age >= 21)
{
 printf("you are an adult\n");
}

else if(age >= 13)
{
 printf("you are a teenager\n");
}

else if(age > 0)
{
 printf("You are born\n");
}

else if(age < 0)
{
 printf("invalid answer\n");
}

else if (age == 0)
{
  printf("you are not born yet\n");
}
  return 0;
}
