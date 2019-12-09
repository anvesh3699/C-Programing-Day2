#include <stdio.h>

int main() //print 5 th table
{
    int a,n;
    printf("\n Enter a number :");
    scanf("%d",&n);
    if(n%2==1)
    n=n-1;
    while(n>=2)
    { 
        printf("\n%d",n);
        n-=2;
    }
}
