#include<stdio.h>
#include<string.h>

int main()
{
    int length1,length2,i;
    char str1[10],str2[10];
    printf("Enter string 1 :");
    gets(str1);
    
    printf("\nEnter string 2 :");
    gets(str2);
    
    int value = strcmp(str1,str2);
    
    if (value == 0)
        printf("\nString Matched");
    else
        printf("\nString Doesn't Matched");
}