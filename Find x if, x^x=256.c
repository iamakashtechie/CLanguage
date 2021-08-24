//————————————Problem_Solving——————————————
//Q) (x^√x)^√x = 256 , Find X ?

#include <stdio.h>
#include <math.h>

int main()
{

    int x,c=0,new,a=256;
    for(int x=0; x<=a; x++)
    {
        if(pow(x,x)==a)
            new=x;
        c++;
    }
    if(c>0)
        printf("%d",new);
    else if(c=0)
        printf("Don't know");
}