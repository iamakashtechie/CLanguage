int input();
int check(int n);
int sod(int n);
int main()
{
    int n=0,c=0;
    n = input();
    c = check(n);
    if (c==1)
    printf("%d is a Magic number",n);
    if (c==0)
    printf("%d is not a Magic number",n);
}

int input()
{
    int n=0;
    printf("Enter a number :\n");
    scanf("%d",&n);
    return n;
}

int sod(int n)
{
    int sum=0, digit=0;
    while(n>0)
    {
        digit = n%10;
        sum+=digit;
        n =n/10;
    }
    return sum;
}

int check(int n)
{
    int sum=sod(n);
    while (sum>9)
    {
        sum=sod(sum);
    }
    
    printf("The value of sum=%d",sum);
    if (sum==1)
    return 1;
    else
    return 0;
}