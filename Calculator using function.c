#include<stdio.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main()
{
    float a,b,result;
    int n;
    printf("Enter two numbers  :\n");
    scanf("%f %f",&a,&b);
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter your choice :\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        result = addition(a,b);
        break;
    case 2:
        result = subtraction(a,b);
        break;
    case 3:
        result = multiplication(a,b);
        break;
    case 4:
        result = division(a,b);
        break;
    default:
        printf("Wrong input!");
        break;
    }
    printf("The result of %.f and %.f is %.f",a,b,result);
}

float addition(float a, float b)
{
    float result;
    result = a+b;
    return result;
}
float subtraction(float a, float b)
{
    float result;
    result = a-b;
    return result;
}
float multiplication(float a, float b)
{
    float result;
    result = a*b;
    return result;
}
float division(float a, float b)
{

    float result;
    result = a/b;
    return result;
}