#include <stdio.h>
#include <conio.h>
// This program will calculate cutoff marks for a student
int main ()
{
    double maths, physics, chemistry, entrance_marks, cutoff_marks;

    printf("Enter your marks obtained in Mathematics(out of 200): "); //For input of marks obtained in mathematics
    scanf("%lf", &maths);

    printf("Enter your marks obtained in Physics(out of 200): "); //For input of marks obtained in phyics
    scanf("%lf", &physics);

    printf("Enter your marks obtained in Chemistry(out of 200): "); //For input of marks obtained in chemistry
    scanf("%lf", &chemistry);

    printf("Enter your marks obtained in Entrance Exam(out of 100): "); //For input of marks obtained in entrance exam
    scanf("%lf", &entrance_marks);

    if(maths>=0 && maths<=200 && physics>=0 && physics<=200 && chemistry>=0 && chemistry<=200 && entrance_marks>=0 && entrance_marks<=100)
    {
        cutoff_marks = maths/2 + physics/2 + chemistry/2 + entrance_marks;

        printf("Your cutoff marks are %0.0lf", cutoff_marks); //For output of cutoff marks
    }
    else
    {
        printf("Marks obtained cannot be negative or more than maximum marks!");
    }
    getch();
return 0;
}