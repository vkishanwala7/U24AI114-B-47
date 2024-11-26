#include <stdio.h>
#include <conio.h>
//This program will read a array and print number of odd and even elements
int main()
{
    int n,odd=0,even=0;
    printf("Enter size of array(According to question - 10): "); //Input of size
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) //Input of array and calculation of odd and even
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]%2!=0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("The number of odd and even elements are %d and %d respectively", odd,even); //Output
    getch();
    return 0;
}