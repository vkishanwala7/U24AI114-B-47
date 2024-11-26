//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.
#include<stdio.h>
#include<stdlib.h>

void function()
{
    int array[10],max;
    max = -32000;
    printf("To give the maximum number out of an inputed array.\n");
    for(int i=0;i<10;i++) {
        printf("Input the number for the array:\n");
        scanf("%d",&array[i]);
    }
    printf("Present array...\n");
    printf("[\t");
    for(int i=0;i<10;i++) {
        printf("%d\t",array[i]);
        max = (max>array[i])? max : array[i];
    }
    printf("]\n");
    printf("The maximmum number out of the array is : %d",max);
   return ;
}

int main(){
    function();
    return 0;
}