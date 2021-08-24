#include "stdio.h"

int main()
{
    int i=0,n=0;
    printf("How many numbers ? ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      printf("\nEnter the number %d :",i+1);
      scanf("%d",&a[i]);
    }
    for(i=(n-1);i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}