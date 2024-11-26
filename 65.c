#include <stdio.h>
#include <conio.h>
int main()
{
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        printf("Enter row %d: ", i+1);
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    } 
    getch();
    return 0;
}