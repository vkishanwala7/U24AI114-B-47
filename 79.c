#include <stdio.h>
#include <conio.h>
// This program will swap 2 variables without using a third variable using function
void swap(int *a, int *b)
{
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
    return;
}
int main()
{
    int a,b;
    printf("Enter value of 1st variable: ");    //For input of 1st variable
    scanf("%d", &a);
    printf("Enter value of 2nd variable: ");    //For input of 2nd variable
    scanf("%d", &b);
    printf("Value of 1st and 2nd variable is %d and %d respectively\n", a,b);
    swap(&a,&b);
    printf("Now interchanging\nValue of 1st and 2nd variable is %d and %d respectively", a,b);  //Output
}