#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 0, r = 0, c = 0;
    printf("\nEnter the row :");
    scanf("%d", &r);
    printf("\nEnter the column :");
    scanf("%d", &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    int b[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nA =\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("    %d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nB =\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("    %d", b[i][j]);
        }
        printf("\n");
    }

    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\nA+B =\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("    %d", m[i][j]);
        }
        printf("\n");
    }
}