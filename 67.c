#include <stdio.h>
#include <conio.h>
//This program will read 2 matrix and give their substraction as resultant
int main()
{
    printf("Array 1 - Array 2\n");
    int r, c;
    printf("Enter number of rows for matrix 1 and 2: ");    //For input of rows
    scanf("%d", &r);
    printf("Enter number of columns for matrix 1 and 2: ");     //For input of columns
    scanf("%d", &c);
    int arr1[r][c], arr2[r][c], res[r][c];
    printf("\n");
    for (int i = 0; i < r; i++)     //For input of matrix 1
    {
        printf("Enter row %d for matrix 1: ", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)     //For input of matrix 2 and calculation of resultant
    {
        printf("Enter row %d for matrix 2: ", i + 1);
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
            res[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("\nResultant matrix :\n");       //Output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}