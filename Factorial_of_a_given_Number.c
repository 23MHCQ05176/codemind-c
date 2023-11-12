#include<stdio.h>
int main()
{
    int a,b,fact=1;
    scanf("%d",&a);
    for(b=a;b>=1;b--)
    {
        fact=fact*b;
    }
    printf("%d ",fact);
}