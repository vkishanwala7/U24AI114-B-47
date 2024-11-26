#include <stdio.h>
#include <conio.h>
#include <limits.h>
//This program will read an 2D array and find maximum and minimum value
int main()
{
    int r,c,max=INT_MIN,min=INT_MAX;
    printf("Enter number of rows(According to question - 3): "); //Input of rows
    scanf("%d", &r);
    printf("Enter number of columns(According to question - 3): "); //Input of columns
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0; i<r; i++) //Input of array and calculations of max and min
    {
        printf("Enter row %d: ",i+1);
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("The maximum and minimum value is %d and %d respectively", max,min); //Output
    getch();
    return 0;
}