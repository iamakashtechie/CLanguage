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
        if( j == 0 || j==c-1)
        a[i][j] = 0;
        else
        a[i][j] = 1;
    }
    }
    for (i=0;i<=((c-1)/2); i++)
    {
        a[i][i]=0;
    }
    for (i=((c-1)/2);i<=c; i++)
    {
        a[c-i-1][i]=0;
    }
    
     for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
        printf("\t%d",a[i][j]);
    }
    printf("\n\n");
    }
}