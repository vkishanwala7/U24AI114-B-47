#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct employee
{
    int number;
    char name[20];
    unsigned long int salary;
} employee;

int main()
{
    int n;
    printf("Enter total number of employees: ");
    scanf("%d",&n);
    printf("\n");
    employee emp[n];
    employee *p=emp;
    for(int i=0; i<n; i++)
    {
        printf("Enter the employee %d ID: ",i+1);
        scanf("%d", &p->number);
        printf("Enter the employee name: ");
        scanf("%s", p->name);
        printf("Enter the employee salary: ");
        scanf("%lu", &p->salary);
        printf("\n");
        p++;
    }
    p=emp;
    for(int i=0; i<n; i++)
    {
        printf("Employee %d details:\n",i+1);
        printf("Employee Number: %d\n",p->number);
        printf("Employee Number: %s\n",p->name);
        printf("Employee Number: %lu\n",p->salary);
        printf("\n");
        p++;
    }
    getch();
    return 0;
}