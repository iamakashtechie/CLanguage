#include<stdio.h>
int units();
float calculate(int u);
int main()
{
    int u=0;
    float amt=0;
    u = units();
    amt = calculate(u);
    printf("Amount for %d units is ₹%.3f",u,amt);
}

int units()
{
    int u=0;
    printf("Enter the units consumed :");
    scanf("%d",&u);
    return u;
}

float calculate(int u)
{
    float amt=0;
    if (u<=100)
        amt = 0.8*u;
    else if (u>100 && u<=200)
        amt = 80+((u-100)*1);
    else if (u>200)
        amt = 180+((u-200)*1.25);   
    return amt;
}