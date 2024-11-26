#include <stdio.h>
#include <conio.h>
//This program will perform a linear search in the array
int main()
{
    int n,a,check=0;
    printf("Enter size of array: "); //Input of size
    scanf("%d", &n);
    printf("Enter the number for linear search: "); //Input of element of linear search
    scanf("%d", &a);
    int arr[n];
    printf("Enter the array: \n");
    for(int i=0; i<n; i++) //Input of array and linear searching
    {
        scanf("%d", &arr[i]);
        if(arr[i]==a)
        {
            check=1;
        }
    }
    if(check==1)    //Output
    {
        printf("%d is present in the array", a);
    }
    else
    {
        printf("%d is not present in the array", a);
    }
    getch();
    return 0;
}