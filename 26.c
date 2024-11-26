#include <stdio.h>
#include <conio.h>
// This program will calculate sum of odd and sum of all even numbers till a particular term
int main()
{
    printf("1+3+5+......+(n terms)\n"); //For user understanding
    printf("2+4+6+......+(n terms)\n");
    int n,a=0,b=0;
    printf("Please enter the value of n: "); //For input of value of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=1; i<=2*n-3; i+=2){ //Loop for odd numbers
        printf("%d+", i);
        a+=i;
    }
    a+=2*n-1;
    printf("%d= %d\n", 2*n-1,a);
        
    for(int i=2; i<=2*n-2; i+=2){   //Loop for even numbers
        printf("%d+", i);
        b+=i;
    }
    b+=2*n;
    printf("%d= %d", 2*n,b);
    getch();
    return 0;
}