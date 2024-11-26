#include <stdio.h>
#include <conio.h>
// This program will read time in hours, minutes, seconds and give total seconds
int main()
{
    int hour, min, sec;
    printf("Please enter your time [In (hh mm ss) format]: "); //Input of time
    scanf("%d %d %d", &hour, &min, &sec);

    if(hour>=0 && min>=0 && sec>=0)
    {
        hour *= 3600; //Calculations for converting time
        min *= 60;
        sec = hour+min+sec;
        printf("Your time in seconds is %d seconds", sec); //Output after converting
    }
    else
    {
        printf("Time cannot be negative!");
    }
    getch();
    return 0;
}