#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void modify(int *A, int N)
{
    int *P;
    P = A;

    printf("Value before modification was %d\n", *P);
    *P = N;
    printf("Value after modification is %d", *P);
}

int main()
{
    int N,M;
    printf("Enter the Value of variable: \n");
    scanf("%d",&N);
    printf("Enter the modified value: \n");
    scanf("%d",&M);
    modify(&N,M);
    getch();
    return 0;
}