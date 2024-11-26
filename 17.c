#include <stdio.h>
#include <conio.h>
//This program will calculate maximum of 3 integers using && operator
int main()
{
    int x,y,z;
    printf("Please enter 3 integers: "); //For input of 3 integers
    scanf("%d %d %d", &x,&y,&z);
    
    if(x>y && x>z) //Setting conditions to find maximum of 3 integers using && operator
        printf("%d is the greatest integer", x); //Output
    else if(y>x && y>z)
        printf("%d is the greatest integer", y); //Output
    else
        printf("%d is the greatest integer", z); //Output
    
    getch();
    return 0;
}