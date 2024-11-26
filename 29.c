#include <stdio.h>
#include <conio.h>
//This program will tell if a number is palindrome or not
int main()
{
    printf("This will tell if the number you entered is palindrome or not\n");
    int n1, n2, last, number=0;
    printf("Please enter a integer: ");     //For input of number
    scanf("%d", &n1);
    
    for(int i=0; n1<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n1);   
    }
    n2=n1;
    while(n1!=0)  //Loop for detection of palindrome
    {
        number*=10;
        number = number + (n1%10);
        n1/=10;
    }
    if(number == n2) //Output
    {
        printf("%d is a palindrome number", n2);
    }
    else
    {
        printf("%d is a not palindrome number", n2);
    }
    getch();
    return 0;
}