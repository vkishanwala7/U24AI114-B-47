#include <stdio.h>
#include <conio.h>
//This program will show the given series
int main()
{
    int n;
    char a = 'A';
    printf("Please enter number of lines: ");   //For input of n
    scanf("%d", &n);
    for(int i=0; n<0; i++) //Loop if user enters a negative integer
    {     
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=1; i<=n; i++) //Loop for lines
    {
        for(int j=1; j<=i; j++) //Loop for printing A,B...
        {
            printf("%c ", j+(int)a-1);
        }
        printf("\n");
    }
    getch();
    return 0;
}