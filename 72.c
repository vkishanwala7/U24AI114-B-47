#include <stdio.h>
#include <conio.h>
//This program will rotate a array by k rotations
int main()
{
    int n,k;
    printf("Enter size of array: "); //Input of size
    scanf("%d", &n);
    printf("Enter number of rotations: "); //Input of rotation
    scanf("%d", &k);
    k = k % n;  //For reducing time
    int arr[n];
    printf("Enter the array:\n");
    for(int i=0; i<n; i++) //Input of array
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<k; i++)  //Rotating the array
    {
        for(int j=0; j<n; j++)
        {
            int temp=arr[j];
            arr[j]=arr[n-1];
            arr[n-1]=temp;
        } 
    }
    for(int i=0; i<n; i++) //Output
    {
        printf("%d ", arr[i]);
    }
    getch();
    return 0;
}