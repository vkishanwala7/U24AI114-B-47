#include <stdio.h>
#include <conio.h>
//This program will give you table of any number
int main()
{
    int n;
    printf("Please enter the number you want the table for: "); //For input of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user dont enter a positive integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=1; i<=10; i++){   //Loop for printing table
        int g = n*i;
        printf("%d x %d = %d\n", n,i,g);
    }

    getch();
    return 0;
}