#include <stdio.h>
#include <conio.h>
//This program will copy elements of one array to other array in reverse order using pointers
int main()
{
    int n;
    printf("Please enter the number of elements: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int *p=arr1;
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<n; i++)
    {
        arr2[n-i-1] = *p;
        p++;
    }
    printf("Array 2 elements after copying are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }
    getch();
    return 0;
}