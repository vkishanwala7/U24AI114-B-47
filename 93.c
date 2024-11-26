#include <stdio.h>
#include <conio.h>
//This program will find words in a string using pointers
int main()
{
    char str[50];
    char *p=str;
    int count=1;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    for(int i=0; *p!='\0'; i++)
    {
        if(*p==' ')
        {
            count++;
        }
        p++;
    }
    if(count==1)
    {
        printf("There is %d word in this string",count);
    }
    else
    {
        printf("There are %d words in this string",count);
    }
    getch();
    return 0;
}