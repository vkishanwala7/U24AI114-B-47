#include <stdio.h>
//This program will calculate the sum of even digits of a number
int main()
{
    printf("This program will calculate the sum of digits of a number\n");
    int sum=0, x;
    unsigned long long int n,a;
    printf("Please enter a integer: ");     //For input of number
    scanf("%llu", &n);
    for(int i=0; n<0; i++) //Loop if user enters a negative integer
    {     
        printf("Please enter a positive integer: ");
        scanf("%llu", &n);
    }
    a=n;
    while(n!=0) //Loop for sum of digits
    {    
        x=n%10;
        n/=10;
        if(x%2==0)
        {
            sum+=x;
        }
    }
    printf("Sum of all digits of %llu is %d\n",a, sum);  //Output
    return 0;
}