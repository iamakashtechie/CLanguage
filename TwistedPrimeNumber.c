#include <stdio.h>
//Twisted prime no. example is 13 & 31.

int input();
int isPrime(int n);
int reverse(int n);

int main()
{
    int n=0,c=0,r=0;
    n = input();
    r=reverse(n);
    c = (isPrime(n))*(isPrime(r));
    if (c == 1)
    printf("%d is a twisted prime number.",n);
    if (c == 0)
    printf("%d is not a twisted prime number.",n);
}

int input()
{
    int n=0;
    printf("Enter a number :\n");
    scanf("%d",&n);
    return n;
}

int reverse(int n)
{
    int reverse=0;
    while (n!=0)
    {
        int digit= n%10;
        reverse=reverse*10+digit;
        n/=10;
    }
    return reverse;
}

int isPrime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i ==0)
        c++;
    }
        if (c>2)
            return 0;
        else
            return 1;
}