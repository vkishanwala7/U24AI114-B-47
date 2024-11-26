#include <stdio.h>
#include <conio.h>
// This program will find your percentage 

int main()
{
    double sub1, sub2, sub3, sub4, sub5, total, percentage;
    printf("Please enter your marks in each subject out of 100\n");

    printf("Please enter your marks in subject 1: "); //For input of marks in subject 1
    scanf("%lf", &sub1);

    printf("Please enter your marks in subject 2: "); //For input of marks in subject 2
    scanf("%lf", &sub2);

    printf("Please enter your marks in subject 3: "); //For input of marks in subject 3
    scanf("%lf", &sub3);

    printf("Please enter your marks in subject 4: "); //For input of marks in subject 4
    scanf("%lf", &sub4);

    printf("Please enter your marks in subject 5: "); //For input of marks in subject 5
    scanf("%lf", &sub5);

    if(sub1>=0 && sub2>=0 && sub3>=0 && sub4>=0 && sub5>=0 && sub1<=100 && sub2<=100 && sub3<=100 && sub4<=100 && sub5<=100)
    {
        total = sub1+sub2+sub3+sub4+sub5; 
        percentage = (total)/5;
        printf("Your Total Marks are %0.2lf Percentage is %0.2lf",total, percentage); //For output of marks and percentage
    }
    else
    {
        printf("Your marks cannot be negative and more than maximum marks!");
    }
    getch();
    return 0;    
}