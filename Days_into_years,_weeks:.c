#include<stdio.h>
int main()
{
    int d,year,weeks;
    scanf("%d",&d);
    year=(d/365);
    weeks=(d%365)/7;
    printf("%d
",year);
    printf("%d",weeks);
}