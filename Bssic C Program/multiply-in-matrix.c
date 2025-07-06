#include <stdio.h>
#define MAXROWS 20
#define MAXCOLS 30
void readinput(int a[][MAXCOLS], int rows, int cols);
void computemult(int a[][MAXCOLS], int b[][MAXCOLS], int c[][MAXCOLS], int rows, int rcols, int cols);
void writeoutput(int c[][MAXCOLS], int rows, int cols);
main()
{
    int arows, acols, brows, bcols;
    int a[MAXROWS][MAXCOLS], b[MAXROWS][MAXCOLS], c[MAXROWS][MAXCOLS];
    printf("How many rows and cloumns for matrix a?");
    scanf("%d%d", &arows, &acols);
    printf("\n");
    printf("How many rows and columns for matrix b?");
    scanf("%d%d", &brows, &bcols);
    printf("\n");
    printf("\n\nFirst Table:\n\n");
    readinput(a, arows, acols);
    printf("\n\nSecond Table:\n\n");
    readinput(b, brows, bcols);
    computemult(a, b, c, arows, acols, bcols);
    printf("\n\nMatrix Multiplication\n\n");
    writeoutput(c, arows, bcols);
}
void readinput(int a[][MAXCOLS], int m, int n)
{
    int row, col;
    for (row = 0; row < m; ++row)
    {
        printf("\nEnter data for row no. %d\n", row + 1);
        for (col = 0; col < n; ++col)
        {
            scanf("%d", &a[row][col]);
        }
    }
    return;
}
void computemult(int a[][MAXCOLS], int b[][MAXCOLS], int c[][MAXCOLS], int m, int k, int n)
{
    int row, col, j;
    for (row = 0; row < m; ++row)
    {
        for (col = 0; col < n; ++col)
        {
            c[row][col] = 0;
            for (j = 0; j < k; ++j)
            {
                c[row][col] = c[row][col] + a[row][j] * b[j][col];
            }
        }
    }
    return;
}
void writeoutput(int a[][MAXCOLS], int m, int n)
{
    int row, col;
    for (row = 0; row < m; ++row)
    {
        for (col = 0; col < n; ++col)
        {
            printf("%d\t", a[row][col]);
        }
        printf("\n");
    }
    return;
}