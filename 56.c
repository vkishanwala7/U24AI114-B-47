#include <stdio.h>
#include <conio.h>
//This program will read a array and print number of negative, zero, positive elements
int main()
{
    int n,negative=0,zero=0,positive=0;
    printf("Enter size of array(According to question - 10): "); //Input of size
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) //Input of array and calculation of -ve,0,+ve
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]<0)
        {
            negative++;
        }
        else if(arr[i]==0)
        {
            zero++;
        }
        else
        {
            positive++;
        }
    }
    printf("The number of negative, zero and positive elements are %d,%d,%d respectively", negative,zero,positive); //Output
    getch();
    return 0;
}