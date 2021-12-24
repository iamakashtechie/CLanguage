#include<stdio.h> 
void main()
{
    char name[]="Earth";
    char *cp;
    for(cp=name;*cp!='\0';cp++)
    {
        printf("%c\n",*cp);
    }
}