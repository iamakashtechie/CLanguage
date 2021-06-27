#include <stdio.h>
/*A program to find Simple Interest*/
main()
{
int p,t,r,SIMPLE_INTEREST,AMOUNT;
p=1000;
t=1;
r=5;
SIMPLE_INTEREST=((p*t*r)/100);
AMOUNT=(p+SIMPLE_INTEREST);
printf("SIMPLE_INTEREST=%d",SIMPLE_INTEREST);
printf("\n");
printf("AMOUNT=%d",AMOUNT);
return 0;
}


