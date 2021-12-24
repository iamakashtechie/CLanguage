#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 0, j = 0, k = 0, r = 0, c = 0, r = 0, c = 0;

    printf("\nEnter the row of matrix A :");
    scanf("%d", &r);
    printf("\nEnter the column of matrix A :");
    scanf("%d", &c);

    printf("\nEnter the row of matrix B :");
    scanf("%d", &r);
    printf("\nEnter the column of matrix B :");
    scanf("%d", &c);

    int a[r][c], b[r][c], m[r][c];
    if (c == r)
    {
        a[r][c] = 0;
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                printf("\nEnter a%d%d: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }

        b[r][c] = 0;
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                printf("\nEnter b%d%d: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nA =\n");
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                printf("    %d", a[i][j]);
            }
            printf("\n");
        }
        printf("\nB =\n");
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                printf("    %d", b[i][j]);
            }
            printf("\n");
        }

        // Initializing elements of matrix mult to 0.
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                m[i][j] = 0;
            }
        }
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                for (int k = 0; i < c; ++k)
                {
                    m[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nA x B =\n");
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                printf("    %d", m[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nMake sure that column of matrix A is equal to row of matrix B");
}
