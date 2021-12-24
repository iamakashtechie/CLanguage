#include<stdio.h>
#include<math.h>

int main()
{
    static int x[3][4] ={
                         {10,20,30,40},
                         {11,21,31,41},
                         {12,22,32,42}
                        };
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++)
            printf("%d   ",*(*(x+i)+j));
            printf("\n");
    }
}