#include <stdio.h>
#include <conio.h>
#include <math.h>
// This program will check if a number is armstrong using functions
int armstrong(unsigned long long int x)
{
    unsigned long long int i=x,sum=0;
    int count = 0,last;
    for(int j=1; i!=0; j++) //For counting number of digits
        {
            i /= 10;
            count++;
        }
        i = x;
    for(int k=1; i!=0; k++)  //For checking if armstrong
    {
        last = i % 10;
        sum += pow(last,count);
        i /= 10;
    }
    if(sum == x)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    unsigned long long int n;
    int a;
    printf("Please enter the value of n: ");
    scanf("%llu", &n);
    for (int i = 0; n < 0; i++)   // Loop if user enters a negative integer
    { 
        printf("Please enter a positive integer: ");
        scanf("%llu", &n);
    }
    a=armstrong(n);
    if(a==0)
    {
        printf("%d is a armstrong number", n);
    }
    else
    {
        printf("%d is a not armstrong number", n);
    }
    getch();
    return 0;
}