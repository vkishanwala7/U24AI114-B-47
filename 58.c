#include <stdio.h>
#include <conio.h>
//This program will read two arrays and give their sum as 3rd array
int main()
{
    int n;
    printf("Enter size of array(According to question - 10): "); //Input of size
    scanf("%d", &n);
    int arr1[n],arr2[n],arr3[n];
    for(int i=0; i<n; i++) //Input of array 1
    {
        printf("Enter element %d of array 1: ", i+1);
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++) //Input of array 2 and calculation of array 3
    {
        printf("Enter element %d of array 2: ", i+1);
        scanf("%d", &arr2[i]);
        arr3[i]=arr1[i]+arr2[i];
    }
    printf("Array 3 = ");
    for(int i=0; i<n; i++)  //Output
    {
        printf("%d ", arr3[i]);
    }
    getch();
    return 0;
}