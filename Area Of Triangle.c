#include <stdio.h>

/*A program to find the area of a triangle */
  void main()
 {
   float b,h,area;
   printf("Enter the height of the Triangle :");
   scanf("%f",&h);
   printf("Enter the base of the Triangle :");
   scanf("%f",&b);
   area = (0.5*b*h);
   printf("Area = %f",area);
 }
  