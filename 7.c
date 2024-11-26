#include <stdio.h>
#include <conio.h>
// This program will calculate area of triangle
int main ()
{
    double base, height, area;

    printf("Enter the value of base of triangle: "); //For input of base of triangle
    scanf("%lf", &base);

    printf("Enter the value of height of triangle: "); //For input of height of triangle
    scanf("%lf", &height);

    if(base>0 && height>0)
    {
        area = (base*height)/2;

        printf("The area of triangle is %0.2lf", area); //For output of area of triangle
    }
    else
    {
        printf("Base or Height of Triangle cannot be negative!");
    }
    getch();
    return 0;
}