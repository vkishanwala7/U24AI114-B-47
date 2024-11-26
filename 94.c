#include <stdio.h>
#include <conio.h>
//This program will copy elements of one string to other string in reverse order using pointers
int main()
{
    char str1[50],str2[50];
    char *p=str1;
    int count=0;
    printf("Enter the string: ");
    scanf("%[^\n]s", str1);
    for(int i=0; *p!='\0'; i++)
    {
        count++;
        p++;
    }
    p=str1;
    for(int i=0; *p!='\0'; i++)
    {
        str2[count-i-1] = *p;
        p++;
    }
    p=str2;
    printf("String 2 after copying is:\n");
    for(int i=0; *p!='\0'; i++)
    {
        printf("%c",str2[i]);
        p++;
    }
    getch();
    return 0;
}