#include <stdio.h>

void main()
{
  int x,n,i, multi=1;
  printf("Enter the number : ");
  scanf("%d", &n);
  x=n;
  for (i=1;i<n;i++)
  {
    multi*=x;
    x--;
  }
printf("Multiplication = %d",multi);
}