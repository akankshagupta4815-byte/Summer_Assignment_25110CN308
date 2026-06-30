#include <stdio.h>

int main()
{
    int n, i;
    int empId[20];
    char name[20][50];
    float salary[20];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    
    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", empId[i]);
        printf("Name          : %s\n", name[i]);
        printf("Salary        : %.2f\n", salary[i]);
    }

    return 0;
}