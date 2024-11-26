#include <stdio.h>
#include <conio.h>
//This program will give you factorial of any number between 0-20
int main()
{
    int n;
    unsigned long long int g=1;
    printf("Please enter the integer for its factorial (0-20): "); //For input of n
    scanf("%d", &n);
    for(int i=0; n<0 || n>20; i++){     //Loop if user dont enter a positive or shorter integer
        printf("Please enter a positive integer between 0-20: ");
        scanf("%d", &n);
    }
    for(int i=1; i<=n; i++){    //Loop for calculation of factorial
        g*=i;
    }
    printf("%d! = %llu", n,g); //Output
    getch();
    return 0;
}
