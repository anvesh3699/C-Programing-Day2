#include <stdio.h>

int main() //print reverse number
{
    int n,r;
    printf("\n Enter a number :");
    scanf("%d",&n);
    printf("\n reverse number:");
    while(n>0)
    { 
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
}
