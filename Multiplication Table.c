#include  <stdio.h>

//Multiplication Table

   main()
   {
   int n,i;
   
     printf("Enter the number:");
     scanf("%d",&n);
     for (int i=1; i <11; i++)
     {
       printf("%d x %d",n,i);
       printf(" = %d\n",(n*i));
       
     }
   }