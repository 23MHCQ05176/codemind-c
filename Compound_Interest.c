#include<stdio.h>
#include<math.h>
int main()
{
    double principal_amount,rate,time_duration,amount,compound_interest;
    scanf("%lf",&principal_amount);
    scanf("%lf",&rate);
    scanf("%lf",&time_duration);
    amount=principal_amount*((pow((1+rate/100),time_duration)));
    compound_interest=amount-principal_amount;
    printf("%.2lf",compound_interest);
    return 0;
}