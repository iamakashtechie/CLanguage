#include <stdio.h>
#include<conio.h>

int main ()
{
int n=0, count=0;

    long int a = 1, b = 0, c = 1;

    clrscr();

    printf("How many Fibonacci numbers are required ?");

    scanf("%d", &n);

    printf ("\n The Fibonancci series is : ");
    for (count = 1 ; count <=n ; ++ count)
    {
        printf ("\n Serial number: %d    %ld", count, c);
        a=c;
        c=a+b;
        b=a;
    }
    getch();
}