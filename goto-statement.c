#include<stdio.h>
#define pi 3.14159
int main()
{
    int n=0;
    float r=0,area=0;
    printf("---Area Of Circle---\n");

    again:

    printf("\nEnter the radius of the circle :");
    scanf("%f",&r);    //You can also use  area = pi*pow(r,2);
    area = pi*r*r;     //By including <math.h> 

    printf("\nThe area of the circle is %.3f",area);

    printf("\nIf you want to run again, then press 1 otherwise press 0 :");
    scanf("%d",&n);
    if (n==1)
    {
        goto again;
        printf("\nThankyou for using"); 
    }
    else
    printf("\nThankyou for using"); 
}