/*C Program to calculate Time Period of a Pendulum*/

#include<stdio.h>
#include<math.h>

#define pi 3.14
int main()
{
    float t,l,g=9.8;
    printf("Enter the length of the pendulum(in meters) :\n");
    scanf("%f",&l);
    t = 2*pi*sqrt(l/g);
    printf("The time period of the pendulum is %.3f seconds", t);
}