#include <stdio.h>
#include <conio.h>
#include <limits.h>
//This program will sort individual rows of 2D arrays using selection sort
int main()
{
    int r,c,rmin,indrmin;
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
    for(int i=0; i<r; i++)  //Sorting array using selection sort
    {
        for(int j=0; j<c; j++)
        {
            rmin=INT_MAX;
            for(int k=j; k<c; k++)
            {
                if(arr[i][k]<rmin)
                {
                    rmin=arr[i][k];
                    indrmin=k;
                }
            }
            int temp=arr[i][j];
            arr[i][j]=arr[i][indrmin];
            arr[i][indrmin]=temp;
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