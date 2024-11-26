#include <stdio.h>
#include <conio.h>
//This program will print n fibonacci numbers using fucntions
int fibo(int x)
{
    int a=0,b=1,sum;
    for(int i=1; i<=x; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    return a;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("%d", fibo(i));
        if(i!=n)
        {
            printf(",");
        }
    }
    getch();
    return 0;
}