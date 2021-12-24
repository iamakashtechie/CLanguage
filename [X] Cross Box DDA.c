#include<stdio.h>

int main()
{
    int i,j,r,c;
    printf("Enter the value of rows and columns :");
    scanf("%d %d",&r,&c);
    int a [r][c];
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        if(i==0||j==0||i == j || (i+j) == (c-1)|| i==r-1 ||j==c-1)
        a[i][j] = 1;
        else
        a[i][j] = 0;
    }
    }
    
     for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n");
    }
}