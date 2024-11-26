#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() 
{
    printf("Enter the value of N: ");
    int n;
    scanf("%d",&n);
    int hashh[n][256];
    for(int i=0;i<n;i++) 
    {
        for (int j=0;j<256;j++) 
        {
            hashh[i][j] = 0;
        }
    }
    for(int j=0;j<n;j++)
    {
        char name_of_stones[100];
        scanf("%s",name_of_stones);

        for(int i=0;i<strlen(name_of_stones);i++) 
        {
            hashh[j][name_of_stones[i]]++;
        }
    }
    int gem_elements = 0;
    int gem = 0;
    for(int i=97;i<124;i++) 
    {
        int to_be_counted = 1;
        for(int j=0;j<n;j++) 
        {
            if(hashh[j][i]) 
            {
                gem = 1;
            } else 
            {
                gem = 0;
                to_be_counted = 0;
                break;
            }
        }
        if (to_be_counted) 
        {
            gem_elements++;
        }
    }
    printf("%d",gem_elements);
    getch();
    return 0;
}