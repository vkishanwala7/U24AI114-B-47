#include <stdio.h>
#include <conio.h>
// This program will calculate simple interest
int main()
{
    double principal, rate, time, interest;
    
    printf("Please enter your principal value: "); //For input of principal value
    scanf("%lf", &principal);
    
    printf("Please enter your rate per annum(in %%): "); //For input of rate 
    scanf("%lf", &rate);

    printf("Please enter your time (in years): "); //For input of time 
    scanf("%lf", &time);
    
    if(principal>0 && rate>0 && time>0)
    {
        interest = (principal*rate*time)/100;
        printf ("Your simple interest is %0.2lf", interest); //For output of simple interest
    }
    else
    {
        printf("Values cannot be negative!");
    }
    getch();
    return 0;
}