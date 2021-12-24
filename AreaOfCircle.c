#include<stdio.h>
#define pi 3.14159
int main()
{
    float r=0,area=0;
    printf("•••Area Of Circle•••\n");
    printf("\nEnter the radius of the circle :");
    scanf("%f",&r);    //You can also use
    area = pi*r*r;     //By including <math.h> area = pi*pow(r,2);

    printf("\nThe area of the circle is %.3f",area);
}