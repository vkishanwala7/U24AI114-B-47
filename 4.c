#include <stdio.h>
#include <ctype.h>
#include <conio.h>
// This program will convert fahrenheit temperature to degree centigrade or vice versa
int main()
{
    char unit;
    double temp;

    printf("What would you like to convert Celsius(C) or Farhenheit(F)? : ");
    scanf("%c", &unit); //For input of unit

    unit = toupper(unit); //For unit character to be uppercase if entered lowercase
    
    if(unit == 'C'){
        printf("Enter the temperature in Celsius: "); //For input in celsius
        scanf("%lf", &temp);

        temp = (9*temp/5)+32;
        printf("The temperature in Farhenheit is %0.1lf", temp); //For output in farhenheit
    }
    else if(unit == 'F'){
        printf("Enter the temperature in Farhenheit: "); //For input in farhenheit
        scanf("%lf", &temp);

        temp = (temp-32)*5/9;
        printf("The temperature in Celsius is %0.1lf", temp); //For output in celsius
    }
    else{
        printf("Please enter a valid temperature character!");
    }
    getch();
    return 0;
}