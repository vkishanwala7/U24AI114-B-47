#include <stdio.h>
#include <conio.h>
//This program will show the maximum and minimum number out of n number inputed
int main()
{
    int n,max,min=0;
    printf("Please enter how many numbers you want to input: ");
    scanf("%d", &n);
    for(int i=0; n<0; i++) //Loop if user enters a negative integer
    {     
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }    
    for(int i=1; i<=n; i++)  //Loop for input of n numbers and calculation of max and min
    {
        int a;
        printf("Enter number %d: ", i);
        scanf("%d", &a);
        if(i==1)
        {
            max=a;
            min=a;
        }
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("The maximum number out of %d numbers is %d\n", n,max); //Output
    printf("The minimum number out of %d numbers is %d", n,min); //Output
    getch();
    return 0;
}