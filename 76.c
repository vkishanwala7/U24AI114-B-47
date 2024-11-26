#include <stdio.h>
#include <conio.h>
//This program will check if a number is odd or even usng functions
char oddeven(int x)
{
    char a;
    if(x%2==0) //Calculations for checking odd and even and output
    {
        a='E';
    }
    else
    {
        a='O';
    }
    return a;
}
int main () 
{
    printf("E for Even and O for Odd\n");
    int n;
    char a;
    printf("Enter a number: ");
    scanf("%d", &n);
    a=oddeven(n);
    printf("%c", a);
    getch();
    return 0;
}