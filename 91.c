#include <stdio.h>
#include <conio.h>
//This program will find cube of a given number using pointers
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *p=&n;
    printf("Cube of %d is %d", *p, (*p)*(*p)*(*p));
    getch();
    return 0;
}