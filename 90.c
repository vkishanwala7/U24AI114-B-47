#include <stdio.h>
#include <conio.h>
//This program will find cube of a given number using pointers
int main()
{
    char str[50];
    char *p=str;
    int count=0,space=0;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    for(int i=0; *p!='\0'; i++)
    {
        if(*p==' ')
        {
            space++;
        }
        count++;
        p++;
    }
    printf("Length of string including and excluding space is %d and %d respectively",count,count-space);
    getch();
    return 0;
}