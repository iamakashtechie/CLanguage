#include<stdio.h>

void main()
{
    int n,num,i;
    printf("Enter 1 to print natural numbers :");
    printf("\nEnter 2 to print whole numbers :");
    printf("\nEnter 3 to print reverse natural numbers :");
    printf("\nEnter 4 to print reverse whole numbers :");
    printf("\n\nEnter your choice :");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        {
         printf("Enter the number :");
         scanf("%d",&n);
         for ( i=1;i<=n;i++){
         printf("%d",i);
         printf("  ,  ");}
        }
    break;
    case 2:
        {
         printf("Enter the number :");
         scanf("%d",&n);
         for ( i=0;i<=n;i++){
         printf("%d",i);
         printf("  ,  ");}
        }
    break;
    case 3:
        {
         printf("Enter the number :");
         scanf("%d",&n);
         for ( i=n;i>=1;i--){
         printf("%d",i);
         printf("  ,  ");}
        }
    break;
    case 4:
        {
         printf("Enter the number :");
         scanf("%d",&n);
         for ( i=n;i>=0;i--){
         printf("%d",i);
         printf("  ,  ");}
        }
    break;
    default :
         printf("Invalid input !!");
    }

}