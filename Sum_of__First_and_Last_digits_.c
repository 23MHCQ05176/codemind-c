#include<stdio.h>
int main()
{
    int n,s=0,lastdigit,firstdigit;
    scanf("%d",&n);
    firstdigit=n;
    lastdigit=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    firstdigit=n;
    s=lastdigit + firstdigit;
    printf("%d",s);
}