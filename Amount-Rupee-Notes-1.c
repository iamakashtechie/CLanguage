#include <stdio.h>
int input();
void HundredAmount(int n);
void FiftyAmount(int n);
void TwentyAmount(int n);
void TenAmount(int n);
int main()
{
    int n=0;
    n = input();
    HundredAmount(n);
    FiftyAmount(n);
    TwentyAmount(n);
    TenAmount(n);
}

int input()
{
    int n=0;
    printf("Enter the amount :\n");
    scanf("%d",&n);
    return n;
}
void HundredAmount(int n)
{

    int HundredRupee = n/100;
    int remaining = n - HundredRupee*100;
    printf("\nThe number of Hundered Rupee Notes=%d",HundredRupee);
    printf ("\nRemaining value=%d",remaining);
}
void FiftyAmount(int n)
{

    int FiftyRupee = n/50;
    int remaining = n - FiftyRupee*50;
    printf("\nThe number of Fifty Rupee Notes=%d",FiftyRupee);
    printf ("\nRemaining value=%d",remaining);
}
void TwentyAmount(int n)
{

    int TwentyRupee = n/20;
    int remaining = n - TwentyRupee*20;
    printf("\nThe number of Twenty Rupee Notes=%d",TwentyRupee);
    printf ("\nRemaining value=%d",remaining);
}
void TenAmount(int n)
{

    int TenRupee = n/10;
    int remaining = n - TenRupee*10;
    printf("\nThe number of Ten Rupee Notes=%d",TenRupee);
    printf ("\nRemaining value=%d",remaining);
}