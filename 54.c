#include <stdio.h>
#include <conio.h>
//This program will read a array and print its sum
int main()
{
    int n,sum=0;
    printf("Enter size of array(According to question - 10): "); //Input of size
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) //Input of array and calculation of sum
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum is %d", sum); //Output
    getch();
    return 0;
}