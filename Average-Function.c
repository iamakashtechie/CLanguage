#include<stdio.h>
float average (int a, int b, int c); //==> Function prototype

int main() {
    int x,y,z;
    printf("Enter the value of a b c respectively :");
    scanf("%d %d %d",&x,&y,&z);
    printf("Result is %f",average(x,y,z)); //==> Function call
        
}

float average (int a, int b, int c)  { //==> Function definition
    float result = (float)(a+b+c)/3;
    return result;
    
}