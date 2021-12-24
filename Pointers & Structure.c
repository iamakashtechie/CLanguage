/* Program on pointer to an object of an structure */ #include<stdio.h>

struct student
{
    char name[100];
    int roll;
    float marks;
};
void main()
{
    struct student stu, *pts;
    printf("\n NAME");
    printf("\n Enter Roll: ");
    printf("\n Enter Marks: ");
    gets(stu.name);
    scanf("%d", &stu.roll);
    scanf("%f", &stu.marks);
    pts=&stu;
    printf("\n NAME %s", pts->name);
    printf("\n ROLL %d ", pts->roll);
    printf("\n MARKS %f", pts->marks);

}