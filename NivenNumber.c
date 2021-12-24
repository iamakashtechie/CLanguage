#include <stdio.h>
//Write a program in C to check whether a given number is a Niven Number.
//Niven Number example 21 as 21/(2+1)=7.

int input();
int check(int n);
int main()
{
    int n=0,c=0;
    n = input();
    c = check(n);
    if (c==1)
    printf("%d is a Niven number",n);
    if (c==0)
    printf("%d is not a Niven number",n);
}

int input()
{
    int n=0;
    printf("Enter a number :\n");
    scanf("%d",&n);
    return n;
}

int check(int n)
{
    int sum=0,digit=0;
    int copy=n;
    while(n>0)
    {
        digit = n%10;
        sum+=digit;
        n =n/10;
    }
    
    if (copy % sum == 0)
    return 1;
    else
    return 0;
}