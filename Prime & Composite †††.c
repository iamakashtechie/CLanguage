#include <stdio.h>
void main()
{
  int n,flag=0;
  printf("Enter the number");
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
  if(n%i ==0)
    {
      flag++;
    }}
   if (flag>2)
     printf("Composite no.");
    else
     printf("Prime no.");
    }