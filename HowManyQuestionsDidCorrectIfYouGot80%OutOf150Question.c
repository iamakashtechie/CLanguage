#include<stdio.h>

void main()
{
    float a=0,b=0,tq=0,c1=0,c2=0;
    printf("\nHow many percentage did Student 1 and Student 2 get ? ");
    scanf("%f %f",&a,&b);
    printf("What are the total no. of questions : ");
    scanf("%f",&tq);
    c1 = 150*(a/100);
    c2 = 150*(b/100);
    printf("\nThe total no. of correct answers of Student 1 are %.2f",c1);
    printf("\nThe total no. of correct answers of Student 2 are %.2f",c2);
}