#include <stdio.h>
#define pi 3.14
void main()
{
  float r,area;
  printf("Enter the radius of the circle :");
  scanf("%f",&r);
  area = pi*r*r;
  printf("Area of the circle is : %f",area);
}