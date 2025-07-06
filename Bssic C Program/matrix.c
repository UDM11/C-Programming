#include <stdio.h>
#define SIZE 4
void readMatrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void displayMatrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}
int main()
{
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];
    printf("Enter elements for the first 4x4 matrix:\n");
    readMatrix(matrix1);
    printf("Enter elements for the second 4x4 matrix:\n");
    readMatrix(matrix2);
    addMatrices(matrix1, matrix2, sum);
    printf("\nFirst Matrix:\n");
    displayMatrix(matrix1);
    printf("\nSecond Matrix:\n");
    displayMatrix(matrix2);
    printf("\nSum of the matrices:\n");
    displayMatrix(sum);
    return 0;
}
