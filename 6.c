#include <stdio.h>
#include <conio.h>
// This program will swap 2 variables without using a third variable
int main()
{
    double a, b;
    
    printf("Please enter the value of 1st variable number: "); //For input of 1st variable
    scanf("%lf", &a);

    printf("Please enter the value of 2nd variable number: "); //For input of 2nd variable
    scanf("%lf", &b);

    printf("The values of 1st and 2nd variable are %0.2lf and %0.2lf respectively\n", a, b);

    printf("Now interchanging the values\n");

    a = a-b;
    b = a+b;
    a = b-a;

    printf("The values of 1st and 2nd variable number are %0.2lf and %0.2lf respectively\n", a, b);
    getch();
    return 0;
}