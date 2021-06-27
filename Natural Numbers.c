#include<stdio.h>
//It's a program to print series of natural numbers. 
int main()
{
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for ( i=1;i<=n;i++){
        printf("%d",i);
        printf("  ,  ");}
}