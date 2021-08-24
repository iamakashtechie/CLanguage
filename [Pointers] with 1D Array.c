#include<stdio.h>

int main()
{
    static int age[ ] = {18,20,16,22,24};
    int i = 0, *p;
    p = & age[0];
    while(i<=4)
    {
        printf("\nAddress = %d",p);
        printf("\nArray element = %d",*p);
        i++;
        p++;
    }
}