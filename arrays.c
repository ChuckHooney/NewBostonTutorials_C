#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char name[13] = "Raghav Narula";
  printf("My name is %s\n",name);

  name[2] = 'j';
  printf("My name is %s\n",name);
  return 0;
}
