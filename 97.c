#include <stdio.h>
#include <conio.h>
#include <string.h>
//This program will calculate vowels in an string using pointers
int main()
{
    char vowels[11]="AEIOUaeiou",str[50];
    char *pv=vowels, *p=str;
    int count=0;
    printf("Enter your string:\n");
    scanf("%[^\n]s", str);
    for(int i=0; i<strlen(str); i++)
    {
        for(int j=0; j<10; j++)
        {
            if(*p == *pv)
            {
                count++;
            }
            pv++;
        }
        pv=vowels;
        p++;
    }
    printf("%d vowels", count);
    getch();
    return 0;
}