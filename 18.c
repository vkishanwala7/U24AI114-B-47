#include <stdio.h>
#include <conio.h>
//This program will show greatest integer out of 3 integers using ternary operator
int main()
{
    int x,y,z,a;
    printf("Please enter 3 integers: "); //For input of 3 integers
    scanf("%d %d %d", &x,&y,&z);
    a = x>y ? (x>z ? x : z) : (y>z ? y : z); //Setting conditions to find maximum of 3 integers using ternary operator
    printf("%d is the greatest integer", a); //Output
    
    getch();
    return 0;
}