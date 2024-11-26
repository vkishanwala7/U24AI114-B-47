/*WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
ZERO OTHERWISE.*/
#include <stdio.h>
#include <stdlib.h>

int my_function(int n) {
    int r;        
        if (n==1){
        printf("1 is not prime nor composite.\n");
        return 2;
        }
        for (int i=2;i<=n/2;i++) {
        r = n%i;
        if(r==0) {
            printf("Entered number is composite.");
            return 0;
        }
        }
    printf("Entered number is prime");
    return 1;
}

int main() {
    int num,boom;
    printf("Enter a number to check whether a number is prime:\n");
    scanf("%d",&num);
    boom = my_function(num);
    printf("\nreturned %d",boom);
    
}