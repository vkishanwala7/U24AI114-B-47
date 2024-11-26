#include <stdio.h>
#include <conio.h>
//This program will read an 2D array and find sum of individual rows
int main()
{
    int r,c,sum=0,sumr;
    printf("Enter number of rows(According to question - 3): "); //Input of rows
    scanf("%d", &r);
    printf("Enter number of columns(According to question - 3): "); //Input of columns
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0; i<r; i++) //Input of array and calculation of sums
    {
        sumr=0;
        printf("Enter row %d: ",i+1);
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
            sumr+=arr[i][j];
            sum+=arr[i][j];
        }
        printf("Sum of row %d is %d\n", i+1,sumr);
    }
    printf("The sum of all rows is %d", sum); //Output
    getch();
    return 0;
}