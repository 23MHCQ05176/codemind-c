#include<stdio.h>
int main()
{
    int n,r,i,rev=0;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(i==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}