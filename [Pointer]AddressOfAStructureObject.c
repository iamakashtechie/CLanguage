/* Program on passing an address of a structure object */ 
/* to a pointer as function argument */ 
#include<stdio.h> 
struct student
{
    char name[10];
    float marks;
};
void main()
{
    struct student s;
    printf("\n Enter Name: ");
    scanf("%s", s.name);
    printf("\n Marks: ");
    scanf("%f", &s.marks);
    display(&s);
}
void display(struct student *s1)
{
    printf("DISPLAYING %s %f",s1->name,s1->marks);
}