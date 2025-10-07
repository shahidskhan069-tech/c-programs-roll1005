#include <stdio.h>
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int resultMatrix[10][10], int rowFirst, int colFirst, int rowSecond, int colSecond) 
{
 for (int i = 0; i < rowFirst; i++)
 {
        for (int j = 0; j < colSecond; j++)
 {
            resultMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < rowFirst; i++)
 {
        for (int j = 0; j < colSecond; j++) 
{
            for (int k = 0; k < colFirst; k++) 
{
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void printMatrix(int matrix[10][10], int row, int col) 
{
    for (int i = 0; i < row; i++)
 {
        for (int j = 0; j < col; j++) 
{
            printf("%d ", matrix[i][j]);
        }
printf("\n");
}
}
int main() 
{
    int rowFirst, colFirst, rowSecond, colSecond;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);
     if (colFirst != rowSecond) 
{
        printf("Matrix multiplication is not possible.\n");
        return 1; // Exit the program
    }
   int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < rowFirst; i++) 
{
        for (int j = 0; j < colFirst; j++) 
{
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < rowSecond; i++)
 {
        for (int j = 0; j < colSecond; j++) 
{
            scanf("%d", &secondMatrix[i][j]);
}
    }
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, colFirst, rowSecond, colSecond);
    printf("\nResultant Matrix:\n");
    printMatrix(resultMatrix, rowFirst, colSecond);
   return 0;
}