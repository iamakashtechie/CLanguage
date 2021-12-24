#include <stdio.h>
main()
{
  int i,j;
  int x=2;
  for(i=0;i<3;i++)
  {
    for(j=0;j<(i+1);j++)
    {
      printf("%d ",x);
      x+=2;
   } 
    printf("\n");
   } 
}