/*A c program to find all the prime numbers between a given interval*/
#include<stdio.h>
int prime(int a);
int main()
{
    int i=0,n=0,m=0,x=0;
    printf("Enter the lower and upper limit:");
    scanf("%d %d",&n,&m);
    if(n<m)
    {
    for(i=n;i<=m;i++)
    {
        x=prime(i);
        if(x==-1)
          continue;
        else
        {   printf("%d",x);
            printf("\n");
        }
    }
    }
    else
    printf("Make sure you enter the two numbers correctly like - 20 30");
    return 0;
}

int prime(int a)
{
    int flag=0;
    for(int i=1; i<=a; i++)
    {
        if(a%i == 0)
        {
            flag++;
        }
    }
    if (flag==2)
        return a;
    else 
        return -1;
}