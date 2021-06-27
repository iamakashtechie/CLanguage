#include<stdio.h>

int main(){
    int i = 0,n;
    printf("\nEnter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if (i >= 1){ 
        printf("%d\n", i);
        }
        i++; // i = i + 1;
    }
}