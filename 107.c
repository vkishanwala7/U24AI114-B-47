#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void store_digit(int *No, int num)
{
    int temp;
    int B[100];
    int co =0;
    
    for (int i = 0; i < 100 ; i++)
    {
        B[i]= (*No/pow(10,i));
        B[i] = B[i]%10;

        
        if (B[i]== 0)
        {
         break;
        }
        co++;
    }
    for (int i = 0; i < num/2; i++)
    {
        temp = B[num -1+i ];
        B[num -1+i] = B[i];
        B[i] = temp;
    } 
    for (int i = co-1; i >=0; i--)
    {
        printf("%d", B[i]);
    }
}
int main()
{
    int N,F;
    printf("Enter the number: ");
    scanf("%d",&N);

    printf("\nEnter how many digits to flip from last: ");
    scanf("%d",&F);

    store_digit(&N, F);
    getch();
    return 0;
}