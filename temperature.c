#include <stdio.h>

void main()
{
 float C,F;
 clrscr();
 printf("Enter the temperature in degree Celsius:");
 scanf("%f",&C);
 F = (1.8*C+32);
 printf("In Farhenheit : %f",F);
 getch();
}