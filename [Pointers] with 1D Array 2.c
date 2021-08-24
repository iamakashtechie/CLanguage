#include<stdio.h>

int main()
{
    static int age[ ] = {18,20,16,22,24};
    int i = 0, *p;
    pass(&age[0],5);
}
    
pass(p,x)
int *p,x;
{
    int i = 1;
    while(i<=x)
    {
        printf("\nAddress = %d",p);
        printf("\nArray element = %d",*p);
        i++;
        p++;
    }
}