#include<stdio.h>

int main()
{
    int i,n,x,flag=0;
    printf("How many numbers ? ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the number %d :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number you want to check whether is it in the list or not : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i] == x)
        flag++;
    }
    if (flag==1)
    
    printf("\nThe number is on the list");
        else
        printf("\nThe number is not on the list");
    }