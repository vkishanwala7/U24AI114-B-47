#include <stdio.h>
#include <conio.h>
#include <limits.h>
//This program will find the biggest integer of n given numbers using pointers
int main()
{
    int n;
    printf("Please enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr,max=INT_MIN;
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(*p>max)
        {
            max = *p;
        }
        p++;
    }
    printf("Maximum element is %d", max);
    getch();
    return 0;
}