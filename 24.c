#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>
//Program to calculate function
int main()
{
    printf("Y(x,n) = 1+x ; n=1\n");     //For user understanding
    printf("Y(x,n) = 1+x/n ; n=2\n");
    printf("Y(x,n) = 1+x^n ; n=3\n");
    printf("Y(x,n) = 1+nx ; n>3 or n<1\n");

    int n;
    char a;
    printf("Please enter the value of n: "); //For input of n
    scanf("%d", &n);
    scanf("%c", &a);
    if(a == 10)
    {
        printf("Do you want to enter the value of x? (Y for Yes and N for No): "); //For input of user's will
        scanf("%c", &a);
    }
    a = toupper(a);
    if(a == 'Y'){  //For calculating value of function output
        double x;
        printf("Please enter the value of x: ");
        scanf("%lf", &x);
        if(n==1){
            printf("Y(%0.2lf,%d) = %0.2lf",x,n,x+(double)1);
        }
        else if(n==2){
            printf("Y(%0.2lf,%d) = %0.2lf",x,n,(double)1+x/n);
        }
        else if(n==3){
            printf("Y(%0.2lf,%d) = %0.2lf",x,n,(double)1+pow(x,n));
        }
        else{
            printf("Y(%0.2lf,%d) = %0.2lf",x,n,(double)1+n*x);
        }
    }
    else if(a == 'N'){  //For showing function output
        if(n==1){
            printf("Y(x,%d) = 1+x",n);
        }
        else if(n==2){
            printf("Y(x,%d) = 1+(x/%d)",n,n);
        }
        else if(n==3){
            printf("Y(x,%d) = 1+(x^%d)",n,n);
        }
        else{
            printf("Y(x,%d) = 1+%dx",n,n);
        }
    }
    else{
        printf("\nPlease enter Y or N only");
    }
    getch();
    return 0;
}