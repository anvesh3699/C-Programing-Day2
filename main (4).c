#include <stdio.h>
main()
{
    int n;
    printf("\n Enter the year");
    scanf("%d",&n);
    if(n%4==0 || n%100==0 && n%400==0)
    printf("\n%d is a leap year",n);
    else
    printf("\n%d is not a leap year",n);
}
