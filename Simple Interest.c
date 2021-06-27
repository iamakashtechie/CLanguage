#include <stdio.h>

/*A program to find simple interest of given data*/
  main()
  {
   int p,t,r,si,amt;
   printf("Enter the principle:");
   scanf("%d",&p);
   printf("Enter the time period:");
   scanf("%d",&t);
   printf("Enter the rate:");
   scanf("%d",&r);
   si = ((p*t*r)/100);
   amt = (p + si);
   printf("Simple Interest = %d\n",si);
   printf("Amount = %d",amt);
  }