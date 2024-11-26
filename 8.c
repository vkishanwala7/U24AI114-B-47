#include <stdio.h>
#include <conio.h>
// This program will convert seconds 31558150 into days hours and minutes
int main ()
{
    int mainseconds, seconds, minutes, hours, days;
    mainseconds = 31558150;
    seconds = 31558150;

    days = seconds / (60 * 60 * 24);    //Calculations for converting time
    seconds = seconds - (days * (60 * 60 * 24));
    hours = seconds / (60 * 60);
    seconds = seconds - (hours * (60 * 60));
    minutes = seconds / 60;
    
    printf("%d seconds equals to %d days %d hours %d minutes",mainseconds, days, hours, minutes); //Output after converting

    getch();
    return 0;
}