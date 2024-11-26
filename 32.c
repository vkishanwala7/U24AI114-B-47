#include <stdio.h>
#include <conio.h>
//This program will show the maximum number out of n number inputed
int main()
{
    int n,max1,max2=0;
    printf("Please enter how many numbers you want to input: ");
    scanf("%d", &n);
    for(int i=0; n<0; i++) //Loop if user enters a negative integer
    {     
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }    
    for(int i=1; i<=n; i++)  //Loop for input of n numbers and calculation of max and 2nd max
    {
        int a;
        printf("Enter number %d: ", i);
        scanf("%d", &a);
        if(i==1)
        {
            max1=a;
        }
        if(a>max1)
        {
            max2=max1;
            max1=a;
        }
        if(a<max1 && a>max2)
        {
            max2=a;
        }
    }
    printf("The maximum number out of %d numbers is %d\n", n,max1); //Output
    printf("The second maximum number out of %d numbers is %d", n,max2); //Output
    getch();
    return 0;
}