#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 0, r = 0, c = 0;
    printf("Enter the row :");
    scanf("%d", &r);
    printf("Enter the column :");
    scanf("%d", &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
    printf("The transpose of matrix \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", m[i][j]);
        }
        printf("\n");
    }
    printf("is \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", m[j][i]);
        }
        printf("\n");
    }
}
