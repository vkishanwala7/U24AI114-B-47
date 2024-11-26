#include <stdio.h>
#include <conio.h>
//This program will tell if a number is palindrome or not using functions
int palindrome(int x)
{
    int a=x,number=0;
    while(x != 0)  //Loop for detection of palindrome
    {
        number *= 10;
        number += (x%10);
        x /= 10;
    }
    if(number == a)
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
    printf("This will tell if the number you entered is palindrome or not\n");
    int n,a;
    printf("Please enter a integer: ");     //For input of number
    scanf("%d", &n);
    
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);   
    }
    a=palindrome(n);
    if(a == 0) //Output
    {
        printf("%d is a palindrome number", n);
    }
    else
    {
        printf("%d is a not palindrome number", n);
    }
    getch();
    return 0;
}