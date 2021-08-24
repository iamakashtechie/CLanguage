#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");
//initialization of graphic mode
    circle(150,200,50);
    getch();
    closegraph();
//closing of graphic mode
    return 0;
}