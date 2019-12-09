#include <stdio.h>
main()
{
  int i;
  printf("enter a number:\n");
  scanf("\n%d",&i);
  if(i%5==0 && i%11==0)
  printf("\n%d is divisible by 5 and 11",i);
  else if(i%5==0)
  printf("\n%d is divisible by 5",i);
  else
  printf("\n%d is divisible by 11",i);
}