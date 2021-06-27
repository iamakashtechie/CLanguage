#include<stdio.h>
int units();
int calculate(int u);
int main()
{
    int u=0,amt=0;
    u = units();
    amt = calculate(u);
    printf("Amount for %d units is %d",u,amt);
}

int units()
{
    int u=0;
    printf("Enter the units consumed :");
    scanf("%d",&u);
    return u;
}

int calculate(int u)
{
    int amount=0;
    if (u>0 && u<=100)
        amount = 2*u;
    else if (u>100 && u<=300)
        amount = 200+((u-100)*3);
    else if (u>300)
        amount =1.025*(800+(5*(u-300)));
    return amount;
}