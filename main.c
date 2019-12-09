#include <stdio.h>

int main()
{
    int a;
    char l;
    printf("Enter a letter:");
    scanf("%c",&l);
    a=(int)l;
    if (a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117 )
    {
        printf("%c is vowel",l);
    }
    else
    {
        printf("%c is consonant",l);
    }
}