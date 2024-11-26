#include <stdio.h>
#include <conio.h>
//Program to calculate power of a number with pow function
int main()
{
    int base, exp;
    double result = 1.0;
    printf("Enter a base number: "); //For input of base
    scanf("%d", &base);
    printf("Enter an exponent: "); //For input of exponent
    scanf("%d", &exp);

    for (int i=1; i<=exp; i++) { //Loop for repeated multiplication
        result *= base;
    }
    printf("%d to power of %d = %.0lf",base, exp, result); //Output of result
    getch();
    return 0;
}