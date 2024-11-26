#include <stdio.h>
#include <conio.h>
#include <math.h>
// This program will print armstrong numbers upto a given number
int main()
{
    printf("This will show armstrong numbers upto a given number n\n");
    unsigned long long int n, sum = 0, a;
    int count=0,last;
    printf("Please enter the value of n: ");
    scanf("%llu", &n);
    for (int i = 0; n < 0; i++)
    { // Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%llu", &n);
    }
    for (unsigned long long int i = 1; i <= n; i++) //For checking every number
    {
        a = i;
        for(int j=1; i!=0; j++) //For counting number of digits
        {
            i /= 10;
            count++;
        }
        i = a;
        for(int k=1; i!=0; k++)  //For checking if armstrong
        {
            last = i % 10;
            sum += pow(last,count);
            i /= 10;
        }
        if (sum == a)
        {
            printf("%llu is a armstrong number\n", sum); //Output
        }
        sum = 0;
        count = 0;
        i = a;
    }
    getch();
    return 0;
}