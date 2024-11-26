#include <stdio.h>
#include <conio.h>
//This program will check if a character is upper case letter or lower case letter or not a letter using ternary operator
int main()
{
  char c;
  printf("\nEnter The Character : "); //For input of character
  scanf("%c",&c);
  c>='a' && c<='z' ? printf("%c is Lower Case Letter",c) : c>='A' && c<='Z' ? printf("%c is Upper Case Letter",c) : printf("%c is not a letter!", c);  //Conditions,calculations and Output
  getch();
  return 0;
}