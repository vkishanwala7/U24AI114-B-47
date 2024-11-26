#include <stdio.h>
#include <conio.h>
int nCr(int n , int r)
{
    unsigned long long int a=1,b=1,c=1;
    for(int i=1; i<=n; i++)
    {
        a*=i;
    }
    for(int i=1; i<=r; i++)
    {
        b*=i;
    }
    for(int i=1; i<=n-r; i++)
    {
        c*=i;
    }
    return (a/(b*c));
}
int main()
{
    int n,r;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    for(int i=0; n<0 || n>20; i++)
    {     
        printf("Please enter a positive integer between (1-20): ");
        scanf("%d", &n);
    }
    printf("Please enter the value of r: ");
    scanf("%d", &r);
    for(int i=1; r>n || r>20; i++)
    {
        printf("Please note that value of r cannot be greater than n\n");
        printf("Please enter value of r between (1-20): ");
        scanf("%d", &r);
    }
    printf("The value of %dC%d is %d",n,r,nCr(n,r));
    getch();
    return 0;
}