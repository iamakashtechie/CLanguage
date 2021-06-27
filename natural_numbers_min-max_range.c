#include<stdio.h> 
int main() {
    int min_range,max_range;
    printf("Enter the minimum range :\n");
    scanf("%d",&min_range);
    printf("Enter the maximum range :\n");
    scanf("%d",&max_range);
    while ( min_range <= max_range ){
    printf("The number is %d\n",min_range);
    min_range++;
    }
}