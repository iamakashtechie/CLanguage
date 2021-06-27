#include <stdio.h>
int input();
int HundredAmount(int n);
int FiftyAmount(int n);
int TwentyAmount(int n);
int TenAmount(int n);
int main()
{
    int n=0;
    n = input();
    int HundredRupee=HundredAmount(n);
    n = n - HundredRupee*100;
    printf("\nThe remaining value =%d",n);
    int FiftyRupee= FiftyAmount(n);
    n = n - FiftyRupee*50;
    printf("\nThe remaining value =%d",n);
    int TwentyRupee= TwentyAmount(n);
    n = n - TwentyRupee*20;
    printf("\nThe remaining value =%d",n);
    int TenRupee=TenAmount(n);
    n = n - TenRupee*10;
    printf("\nThe remaining value =%d",n);

}

int input()
{
    int n=0;
    printf("Enter the amount :\n");
    scanf("%d",&n);
    return n;
}
int HundredAmount(int n)
{
    int HundredRupee = n/100;
    printf("\nThe number of Hundered Rupee Notes=%d",HundredRupee);
    return (HundredRupee);
}
int FiftyAmount(int n)
{

    int FiftyRupee = n/50;
    printf("\nThe number of Fifty Rupee Notes=%d",FiftyRupee);
    return (FiftyRupee);
}
int TwentyAmount(int n)
{

    int TwentyRupee = n/20;
    printf("\nThe number of Twenty Rupee Notes=%d",TwentyRupee);
    return (TwentyRupee);
}
int TenAmount(int n)
{
    int TenRupee = n/10;
    printf("\nThe number of Ten Rupee Notes=%d",TenRupee);
    return (TenRupee);
}