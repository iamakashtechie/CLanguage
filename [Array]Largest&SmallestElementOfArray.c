#include "stdio.h"

int main()
{
    int i=0,n=0,max=0,min=0;
    printf("How many numbers ? ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("\nEnter the number %d :",i+1);
        scanf("%d",&a[i]);
    }
    max = min = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
        max = a[i];
        if(a[i]<min)
        min = a[i];
    }
    printf("\nLargest element of the array is %d",max);
    printf("\nSmallest element of the array is %d",min);
}