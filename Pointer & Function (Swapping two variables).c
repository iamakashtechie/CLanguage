/* Program on pointer to an object of an structure */ #include<stdio.h>

void main()
{
    int i,j;
    printf("\n Enter data 1 ");
    scanf("%d",&i);
    printf("\n Enter data 2 ");
    scanf("%d",&j);
    swap(&i,&j);
    printf("\n Data 1 = %d",i);
    printf("\n Data 2 = %d",j);
}
void swap (int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}