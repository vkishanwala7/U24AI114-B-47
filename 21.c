#include <stdio.h>
#include <conio.h>
#include <ctype.h>
// This program will act as a calculator 
int main()
{
    char operation;
    double value1, value2, output;

    printf("A for Addition (Value 1 + Value 2)\n");             //For user understanding
    printf("S for Substraction (Value 1 - Value 2)\n");
    printf("M for Multiplication (Value 1 * Value 2)\n");
    printf("D for Diviion (Value 1 / Value 2)\n");

    printf("Please enter the operation you want to perform: "); //For input of operation
    scanf("%c", &operation);

    operation = toupper(operation); //For operation character to be uppercase if entered lowercase

    switch(operation) //For individual cases
    {
        case 'A':  //For Addition
            printf("Please enter the value of 1st number: "); //For input of 1st number
            scanf("%lf", &value1);
            printf("Please enter the value of 2st number: "); //For input of 2nd number
            scanf("%lf", &value2);
            
            output = value1+value2;
            printf("%0.3lf + %0.3lf = %0.3lf",value1, value2, output); //Output
            break;
        case 'S': //For Substraction
            printf("Please enter the value of 1st number: "); //For input of 1st number
            scanf("%lf", &value1);
            printf("Please enter the value of 2st number: "); //For input of 2nd number
            scanf("%lf", &value2);
            
            output = value1-value2;
            printf("%0.3lf - %0.3lf = %0.3lf",value1, value2, output); //Output
            break;
        case 'M': //For Multiplication
            printf("Please enter the value of 1st number: "); //For input of 1st number
            scanf("%lf", &value1);
            printf("Please enter the value of 2st number: "); //For input of 2nd number
            scanf("%lf", &value2);
            
            output = value1*value2;
            printf("%0.3lf * %0.3lf = %0.3lf",value1, value2, output); //Output
            break;
        case 'D': //For Division
            printf("Please enter the value of 1st number: "); //For input of 1st number
            scanf("%lf", &value1);
            printf("Please enter the value of 2st number: "); //For input of 2nd number
            scanf("%lf", &value2);
            
            output = value1/value2;
            printf("%0.3lf / %0.3lf = %0.3lf",value1, value2, output); //Output
            break;
        default: //For any other case
            printf("Please enter valid operation character!");
    }
    getch();
    return 0;
}