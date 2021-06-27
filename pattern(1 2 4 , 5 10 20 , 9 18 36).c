#include<stdio.h>

int main()
{
    int r,c,i,j,n;
    printf("Enter the number :\n");
    scanf("%d",&n);
    int copy=n;
    printf("Enter the number of rows & columns:\n");
    scanf("%d %d",&r,&c);
    for(i = 0 ; i < r ; i ++)
    {
        for(j = 0 ; j < c ; j ++)
        {
            printf("%d\t",n);
            n+=n;
        }
        copy+=4;
        n=copy;
        printf("\n");
    }
    
}