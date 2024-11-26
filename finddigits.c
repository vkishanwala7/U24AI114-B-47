#include <stdio.h>
#include <conio.h>
int main() 
{
    printf("Enter the number of times you want to test case.\n");
    int n;
    scanf("%d",&n);
    int test_case;
    while(n--) {
        scanf("%d",&test_case);
        int temp_case = test_case;
        int count = 0;
        while (temp_case>0){
            int raw = temp_case % 10;
            temp_case /= 10;
            if(raw==0)
            continue;
            if (test_case%raw==0)
                count++;
        }
        printf("%d\n\n",count);
    }
    getch();
    return 0;
}