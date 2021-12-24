#include "stdio.h"

int main()
{
    int i=0,n=0;
    long int sum=0,product=1;
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
        sum+=a[i];
        product*=a[i];
    }
    printf("\nSum of elements of array %ld :",sum);
    printf("\nProduct of elements of array %ld :",product);
}