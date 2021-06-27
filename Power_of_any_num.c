#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,result;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the power : ");
    scanf("%d", &m);
    result= pow(n,m);
    printf("Result = %d", result);
}