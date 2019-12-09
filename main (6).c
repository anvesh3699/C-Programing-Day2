#include <stdio.h>
main()
{
    int a,b;
    printf("\n Enter two values :");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("\n%d a is big",a);
    else if(b>a)
    printf("\n%d a is big",b);
    else
    printf("\n%d%d Both are equal",a,b);
}