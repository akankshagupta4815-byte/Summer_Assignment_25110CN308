#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary, bonus, totalSalary;
};

int main()
{
    struct Employee e;
    
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &e.bonus);

    e.totalSalary = e.basicSalary + e.bonus;

    printf("\n--- Salary Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Basic Salary: %.2f\n", e.basicSalary);
    printf("Bonus: %.2f\n", e.bonus);
    printf("Total Salary: %.2f\n", e.totalSalary);

    return 0;
}