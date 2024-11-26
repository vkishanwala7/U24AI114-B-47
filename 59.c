#include <stdio.h>
#include <conio.h>
//This program will read two arrays and swap them
int main()
{
    int n;
    printf("Enter size of array(According to question - 10): "); //Input of size
    scanf("%d", &n);
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++) //Input of array 1
    {
        printf("Enter element %d of array 1: ", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Array 1 = ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++) //Input of array 2
    {
        printf("Enter element %d of array 2: ", i+1);
        scanf("%d", &arr2[i]);
    }
    printf("Array 2 = ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr1[i]=arr1[i]+arr2[i];
        arr2[i]=arr1[i]-arr2[i];
        arr1[i]=arr1[i]-arr2[i];
    }
    printf("\nAfter swapping\n");
    printf("Array 1 = ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2 = ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr2[i]);
    }
    getch();
    return 0;
}