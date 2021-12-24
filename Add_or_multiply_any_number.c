// Program to add or multiply any given numbers .
#include <stdio.h>

void main()
{
    int sum=0,mul=1,i=0,n=0,ch=0;
    printf("\nHow many numbers do you want to add or multiply?\n");
    scanf("%d",&n);
    int m[n];
    for(i=0; i<n; i++)
    {
        printf("\nEnter the number - %d:",i+1);
        scanf("%d",&m[i]);
    }

    printf("\nThe values you entered are:");

    for(i=0; i<n; i++)
    {
        printf("%d,",m[i]);
    }
    printf("\nPress 1 to add the numbers or 2 to multiply.");
    scanf("%d",&ch);

    switch(ch)

    {
    case 1:
    {
        for(i=0; i<n; i++)
        {
            sum+=m[i];
        }
        printf("Your sum is = %d",sum);
        break;
    }
    case 2:
    {
        for(i=0; i<n; i++)
        {
            mul*=m[i];
        }
        printf("Your product is = %d",mul);
        break;
    }



    }


}