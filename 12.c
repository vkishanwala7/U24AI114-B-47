#include <stdio.h>
#include <conio.h>
// This program will print ASCII Value of any character
int main()
{
    char character;
    printf("Please enter a character: "); //For input of character
    scanf("%c", &character);
    printf("The ASCII Value of %c is %d", character, character); //%d prints ASCII value of character
    getch();
    return 0;
}