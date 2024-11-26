#include <stdio.h>
#include <conio.h>
//This program will reverse an array
int main()
{
    int n;
    printf("Enter size of array: "); //Input of size
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) //Input of array
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(int i=0,j=n-1; i<=j; i++,j--) //Reversing The Array
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nArray after reversing\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    getch();
    return 0;
}