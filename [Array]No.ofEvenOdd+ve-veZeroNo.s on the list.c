#include<stdio.h>

int main()
{
    int i,n,x,flag=0,even=0,odd=0,pos=0,neg=0,zero=0;
    printf("How many numbers ? ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the number %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2 == 0 && a[i] != 0)
        even++;
        if(a[i]%2 != 0)
        odd++;
        if(a[i]>0)
        pos++;
        if(a[i]<0)
        neg++;
        if(a[i] == 0)
        zero++;
    }
    printf("%d even , %d odd , %d pos , %d neg , %d zero",even,odd,pos,neg,zero);
}