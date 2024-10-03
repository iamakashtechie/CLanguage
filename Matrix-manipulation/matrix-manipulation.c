#include <stdio.h>
#include <stdlib.h>

int read_matrix(int a[10][10], int m, int n);
int write_matrix(int a[10][10], int m, int n);

void main()
{
    int ch, i, j, m, n, p, q, k, r1, c1, r2, c2;
    int a[10][10], b[10][10], c[10][10];
    printf("Choose any one of the following operation \n");
    printf("1: Addition of two matrices \n");
    printf("2: Subtraction of two matrices \n");
    printf("3: Multiplication of two matrices \n");
print:
    printf(" Enter your choice between 1 and 3 :\n");
    scanf("%d", &ch);
    if (ch <= 3 && ch >= 0)
    {
        switch (ch)
        {
        case 1:
        add:
            printf("Enter the order of matrix A :\n");
            scanf("%d%d", &r1, &c1);
            printf("enter the order of matrix B :\n");
            scanf("%d%d", &r2, &c2);
            if ((r1 == r2) && (c1 == c2))
            {
                printf("Enter the elements of matrix A :\n");
                read_matrix(a, r1, c1);
                printf("Enter the elements of matrix B :\n");
                read_matrix(b, r2, c2);
                printf("A+B : \n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                        printf("%d", a[i][j] + b[i][j]);
                    printf("\n");
                }
            }
            else
            {
                printf("Error:order of the two matrices A and B are not equal\n");
                goto add;
            }
            break;
        case 2:
        sub:
            printf("Enter the order of matrix A :\n");
            scanf("%d%d", &r1, &c1);
            printf("Enter the order of matrix B :\n");
            scanf("%d%d", &r2, &c2);
            if ((r1 == r2) && (c1 == c2))
            {
                printf("Enter elements of matrix A :\n");
                read_matrix(a, r1, c1);
                printf("Enter elements of matrix B :\n");
                read_matrix(b, r2, c2);
                printf("A-B: \n");
                for (i = 0; i < r1; i++)
                {
                    for (j = 0; j < c1; j++)
                        printf("%d", a[i][j] - b[i][j]);
                    printf("\n");
                }
            }
            else
            {
                printf("Error: order of the two matrices are not equal\n");
                goto sub;
            }
            break;
        case 3:
        mul:
            printf("Enter the order of matrix A :\n");
            scanf("%d%d", &m, &n);
            printf("Enter the order of matrix B :\n");
            scanf("%d%d", &p, &q);
            if (n == p)
            {
                printf("Enter elements of matrix A :\n");
                read_matrix(a, m, n);
                printf("Enter elements of matrix B :\n");
                read_matrix(b, p, q);
                printf("\nA*B:  \n");
                for (i = 0; i < m; i++)
                {
                    for (j = 0; j < q; j++)
                    {
                        c[i][j] = 0;
                        for (k = 0; k < n; k++)
                            c[i][j] += a[i][k] * b[k][j];
                    }
                }
                printf("\nResultant of two matrices :\n");
                write_matrix(c, m, q);
            }
            else
            {
                printf("Error: order of the two matrices are not equal\n");
                goto mul;
            }
            break;
        case 4:
        {
            printf("\nChoice terminated");
            exit(4);
        }
        break;
        }
    }
    else
    {
        printf("\nInvalid option\n");
        goto print;
    }
}
int read_matrix(int a[10][10], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
}
int write_matrix(int a[10][10], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("  %d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}