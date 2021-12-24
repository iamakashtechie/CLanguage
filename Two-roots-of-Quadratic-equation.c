#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,r1,r2;
    printf("It is a program to find whether the root of a Quadratic Equation are REal or Imaginary.");
    printf("ax^2 + bx + c = 0 \n\n Enter the values of a b & c of the Quadratic Equation :");
    scanf("%d %d %d",&a ,&b ,&c);
    
    d = (b*b)-(4*a*c);
    //printf("%d",d);

    if(d>=0)
    {
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("\nThe two roots of the equation are %d %d",r1,r2);
    }
    else if(d<0)
    printf("\nThe roots of the quadratic equation are imaginary");
}