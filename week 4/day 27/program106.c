#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n = 0, choice, i;

    do
    {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &e[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", e[n].name);

                printf("Enter Salary: ");
                scanf("%f", &e[n].salary);

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Employee Records Found!\n");
                }
                else
                {
                    printf("\nEmployee Records:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("ID: %d\n", e[i].id);
                        printf("Name: %s\n", e[i].name);
                        printf("Salary: %.2f\n\n", e[i].salary);
                    }
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}