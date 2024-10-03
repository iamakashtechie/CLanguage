#include<stdio.h> 
void main()
{
    char name[10]; //="Earth";
    printf("Enter a string :");
    gets(name);
    char *cp;
    for(cp=name;*cp!='\0';cp++)
    {
        printf("%c\n",*cp);
    }
}