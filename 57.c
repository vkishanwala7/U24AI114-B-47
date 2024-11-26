#include <stdio.h>
#include <conio.h>
#include <limits.h>
//This program will read a array and print maximum and second maximum number
int main()
{
    int n,max=INT_MIN,smax=INT_MIN,temp;
    printf("Enter size of array: "); //Input of size
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) //Input of array and calculation of max and second max
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max)
        {
            smax=arr[i];
        }
    }
    printf("The maximum and second maximum number is %d and %d respectively", max,smax); //Output
    getch();
    return 0;
}