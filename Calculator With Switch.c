#include <stdio.h>
void main()
{
    int i,x,n;
    float a,b,sum,sub,multi,div;
    printf("☛ Enter 1 for Addition :\n");
    printf("☛ Enter 2 for Substraction :\n");
    printf("☛ Enter 3 for Multiplication :\n");
    printf("☛ Enter 4 for Division :\n");
    printf("☛ Enter 5 for Factorial :\n\n\n");
    printf("➣ Enter the number :\n ");
    scanf("%d",&n);
    switch(n)
    {
    case 1 :
        printf("Addition\n\n");
        printf("Enter the first number : ");
        scanf("%f",&a);
        printf("Enter the second number : ");
        scanf("%f",&b);
        sum = a+b;
        printf("Sum of %f and %f is %f",a,b,sum);

        break;
    case 2 :
        printf("Substraction\n\n");
        printf("Enter the first number : ");
        scanf("%f",&a);
        printf("Enter the second number : ");
        scanf("%f",&b);
        sub = a-b;
        printf("Subtraction of %f and %f is %f",a,b,sub);

        break;
    case 3 :
        printf("Multiplication\n\n");
        printf("Enter the first number : ");
        scanf("%f",&a);
        printf("Enter the second number : ");
        scanf("%f",&b);
        multi = a*b;
        printf("Multiplication of %f and %f is %f",a,b,multi);

        break;
    case 4 :
        printf("Division\n\n");
        printf("Enter the first number : ");
        scanf("%f",&a);
        printf("Enter the second number : ");
        scanf("%f",&b);
        div = a/b;
        printf("Division of %f and %f is %f",a,b,div);

        break;
    case 5 :
        printf("Factorial\n\n");
        printf("Enter the number : ");
        scanf("%f", &n);
        multi = 1;
        x=n;
        for (i=1; i<n; i++)
        {
            multi*=x;
            x--;
        }
        printf("Multiplication = %f",multi);

        break;
    default :
        printf("Wrong Choise !");
        break;
    }
}