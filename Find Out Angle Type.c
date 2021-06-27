#include <stdio.h>

void main()
{
  float angle;
  printf("Enter the angle in degrees :");
  scanf("%f",&angle);
  if ( angle <90)
  {
    printf("The angle is an Acute angle");
  }
  else  if(angle==90)
  {
    printf("The angle is a Right angle");
  }
  else if (angle<180)
  {
    printf("The angle is a Obtuse angle");
  }
  else if (angle==180)
  {
    printf("The angle is a Straight angle");
  }
  else if (angle>180)
  {
    printf("The angle is a Reflex angle");
  }
}