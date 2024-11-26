#include <stdio.h>
#include <conio.h>
//This program will show the given series
int main()
{
    int n;
    printf("Please enter number of lines: ");   //For input of n
    scanf("%d", &n);
    for(int i=0; n<0; i++) //Loop if user enters a negative integer
    {     
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=1; i<=n; i++) //Loop for lines
    {
        for(int j=1; j<=n; j++) //Loop for printing 0,1
        {
            if(i == j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}