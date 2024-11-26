#include <stdio.h>
#include <conio.h>
//This program will print occurance of a particular element in array
int main()
{
    int n,a,check=0;
    printf("Enter size of array: "); //Input of size
    scanf("%d", &n);
    printf("Enter the number for linear search: "); //Input of element of occurance
    scanf("%d", &a);
    int arr[n];
    printf("Enter the array: \n");
    for(int i=0; i<n; i++) //Input of array and calculating occurance
    {
        scanf("%d", &arr[i]);
        if(arr[i]==a)
        {
            check++;
        }
    }
    printf("%d is present %d times in the array", a,check);    //Output
    getch();
    return 0;
} 