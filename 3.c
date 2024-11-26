#include <stdio.h>
#include <conio.h>
// This program will calculate your gross salary (After deducting taxes)
int main()
{
    double salary, tax, tax_deduction, gross_salary;

    printf("Enter your salary amount: "); //For input of salary
    scanf("%lf", &salary);

    printf("Enter your tax (in %%): "); //For input of tax
    scanf("%lf", &tax);

    if(salary>0 && tax>=0)
    {
        tax_deduction = (tax*salary)/100;

        gross_salary = salary - tax_deduction;
    
        printf("Your amount deducted in tax is %0.2lf\n", tax_deduction);
        printf("Your gross salary is %0.2lf\n", gross_salary); //For output of gross salary
    }
    else
    {
        printf("Salary or Tax cannot be negative!");
    }
    getch();
    return 0;
}