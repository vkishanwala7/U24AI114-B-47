#include <stdio.h>
#include <conio.h>
//This program will print reverse of a number
int main()
{
    printf("This will reverse the number you entered\n");
    int n1, n2, last, number=0;
    printf("Please enter a integer: ");     //For input of number
    scanf("%d", &n1);
    
    for(int i=0; n1<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n1);   
    }
    n2=n1;
    while(n1!=0){
        number*=10;
        number = number + (n1%10);
        n1/=10;
    }
    printf("The reverse of %d is %d", n2, number); //Output
    getch();
    return 0;
}