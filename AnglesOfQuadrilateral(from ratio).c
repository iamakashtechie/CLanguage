#include<stdio.h>

int main()
{
    int a,b,c,d,p,q,r,s,sor;
    printf("•••Angles of a Quadrilateral•••\n");
    printf("\nEnter the ratio of 4 angles :");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sor = a+b+c+d;
    p = (a*360)/sor;
    q = (b*360)/sor;
    r = (c*360)/sor;
    s = (d*360)/sor;
    printf("\nThe 3 angles of the Quadrilateral are %d %d %d %d",p,q,r,s);
}