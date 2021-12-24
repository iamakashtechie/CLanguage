#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter the three sides of a triangle :");
    scanf("%f %f %f",&a,&b,&c);

        if((a+b)>c)
        printf("Triangle can be formed");
        else
        printf("Triangle cannot be formed");
}