#include <stdio.h>
#include <conio.h>
#include <limits.h>
//This program will merge 2 arrays and sort them
int main()
{
    int n1,n2;
    printf("Enter size of array 1: ");   //Input of size of array 1
    scanf("%d", &n1);
    printf("Enter size of array 2: ");    //Input of size of array 2
    scanf("%d", &n2);
    int arr1[n1], arr2[n2], arr3[n1+n2];
    printf("Enter array 1 :\n");
    for(int i=0; i<n1; i++)  //Input of array 1 and merging array 1 and 2
    {
        scanf("%d", &arr1[i]);
        arr3[i]=arr1[i];
    }
    printf("Enter array 2 :\n");
    for(int i=0; i<n2; i++)  //Input of array 2 and merging array 1 and 2
    {
        scanf("%d", &arr2[i]);
        arr3[n1+i]=arr2[i];
    }
    for(int i=0; i<n1+n2; i++)  //Sorting resultant array
    {
        for(int j=0; j<n1+n2-1; j++)
        {
            if(arr3[j]>arr3[j+1])
                {
                    int temp=arr3[j+1];
                    arr3[j+1]=arr3[j];
                    arr3[j]=temp;
                }
        }
    }
    printf("Resultant array :\n");
    for(int i=0; i<n1+n2; i++)  //Output
    {
        printf("%d ", arr3[i]);
    } 
    getch();
    return 0;
}