#include<stdio.h>

int main()
{
    int n,d,r;
    printf("\nEnter the number of units :");
    scanf("%d",&n);
    d = n/12;
    r = n%12;
    printf("%d units = %d dozen(s) + %d units",n,d,r);
}