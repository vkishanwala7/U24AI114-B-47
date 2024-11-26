#include <stdio.h>
#include <conio.h>
// This program will convert total seconds into time format
int main()
{
    long sec, min, hour;
    printf("Please enter your time (in seconds): "); //For input of time
    scanf("%ld", &sec);

    if(sec>=0)
    {
        hour = sec/3600; //Calculations for conversion of time
        sec -= hour*3600;
        min = sec/60;
        sec -= min*60;
        printf("Your time in H:M:S format is %d:%d:%d", hour,min,sec); //Output of time after conversion
    }
    else
    {
        printf("Seconds cannot be negative!");
    }
    getch();
    return 0;
}