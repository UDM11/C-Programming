#include <stdio.h>
#define MAXROWS 20
#define MAXCOLS 30
void readinput(int a[][MAXCOLS], int rows, int ncols);
void computesums(int a[][MAXCOLS], int b[][MAXCOLS], int c[][MAXCOLS], int rows, int ncols);
void writeoutput(int c[][MAXCOLS], int nrows, int ncols);
main()
{
    int nrows, ncols;
    int a[MAXROWS][MAXCOLS], b[MAXROWS][MAXCOLS], c[MAXROWS][MAXCOLS];
    printf("How many rows?");
    scanf("%d", &nrows);
    printf("\n");
    printf("How many columns?");
    scanf("%d", &ncols);
    printf("\n\nFirst Table:\n\n");
    readinput(a, nrows, ncols);
    printf("\n\nSecond Table:\n\n");
    readinput(b, nrows, ncols);
    computesums(a, b, c, nrows, ncols);
    printf("\n\nSums of the elements\n\n");
    writeoutput(c, nrows, ncols);
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
void computesums(int a[][MAXCOLS], int b[][MAXCOLS], int c[][MAXCOLS], int m, int n)
{
    int row, col;
    for (row = 0; row < m; ++row)
    {
        for (col = 0; col < n; ++col)
        {
            c[row][col] = a[row][col] + b[row][col];
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