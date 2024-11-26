#include <stdio.h>
#include <conio.h>
//This program will read 2 matrix, multiply it and show the result
int main()
{
    int m, n, p;
    printf("Enter number of rows for matrix 1: ");  //Input of rows of matrix 1
    scanf("%d", &m);
    printf("Enter number of columns for matrix 1 and rows for matrix 2 (Both are same): "); //Input of columns of matrix 1 and rows of matrix 2 
    scanf("%d", &n);
    printf("Enter number of columns for matrix 2: ");   //Input of columns of matrix 2
    scanf("%d", &p);
    int arr1[m][n], arr2[n][p], res[m][p];
    printf("\n");
    for (int i = 0; i < m; i++) //Input of matrix 1
    {
        printf("Enter row %d for matrix 1: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) //Input of matrix 2
    {
        printf("Enter row %d for matrix 2: ", i + 1);
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++) //Calculation of resultant
    {
        for (int j = 0; j < p; j++)
        {
            res[i][j]=0;
            for(int k = 0; k < n; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("Resultant matrix :\n");
    for (int i = 0; i < m; i++)     //Output
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}