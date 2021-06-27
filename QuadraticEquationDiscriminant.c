#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    
    printf("Enter the values of a b & c of the Quadratic Equation :");
    scanf("%d %d %d",&a ,&b ,&c);
    
    d = (b*b)-(4*a*c);
    //printf("%d",d);

    if(d>=0)
    printf("\nThe roots of the Quadratic Equation are real");
    else if(d<0)
    printf("\nThe roots of the Quadratic Equation are imaginary");

}