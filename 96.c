#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//This program will sort the strings in ascending order of their length
int main()
{
    int n;
    printf("Enter the number of strings you want to enter: ");
    scanf("%d",&n);
    char **ptr = (char **) malloc(n*sizeof(char *));
    for(int i=0; i<n; i++)
    {
        ptr[i] = (char *) malloc(40*sizeof(char));
        printf("Enter string %d: ",i+1);
        scanf("%s",ptr[i]);
    } 
    char temp[40];
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(strlen(ptr[j])>strlen(ptr[j+1]))
            {
                strcpy(temp,ptr[j]);
                strcpy(ptr[j],ptr[j+1]);
                strcpy(ptr[j+1],temp);
            }
        }
    }
    printf("Strings in ascending order of their lengths are:\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n", ptr[i]);
    }
    getch();
    return 0;
}