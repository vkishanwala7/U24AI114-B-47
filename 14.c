#include <stdio.h>
#include <conio.h>
//This program will check a character is alphabet (upper or lower case), number or a special character
int main()
{
    char ch;
    printf("Please enter a character: "); //For input of character
    scanf("%c", &ch);

    if(ch>='a' && ch<='z') //Lower case character bound
        printf("%c is a lower case alphabet!", ch);
    else if(ch>='A' && ch<='Z') //Upper case character bound
        printf("%c is a capital case alphabet!", ch);
    else if(ch>='0' && ch<='9') //Number character bound
        printf("%c is a number!", ch);
    else
        printf("%c is a special character!", ch); //Special character bound
    
    getch();
    return 0;
}