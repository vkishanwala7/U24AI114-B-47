#include <stdio.h>
#include <conio.h>
#include <limits.h>
//This program will sort individual rows of 2D arrays using bubble sort
int main()
{
    int r,c;
    printf("Enter number of rows: ");   //Input of rows
    scanf("%d", &r);
    printf("Enter number of columns: ");    //Input of columns
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0; i<r; i++)  //Input of array
    {
        printf("Enter row %d: ", i+1);
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<r; i++)  //Sorting array using bubble sort
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<c-1; k++)
            {
                if(arr[i][k]>arr[i][k+1])
                {
                    int temp=arr[i][k+1];
                    arr[i][k+1]=arr[i][k];
                    arr[i][k]=temp;
                }
            }
        }
    }
    for(int i=0; i<r; i++)  //Output
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } 
    getch();
    return 0;
}