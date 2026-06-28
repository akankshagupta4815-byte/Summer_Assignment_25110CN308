#include <stdio.h>

int main()
{
    int choice;
    int books = 100; // Initial number of books

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Display Available Books\n");
        printf("2. Issue a Book\n");
        printf("3. Return a Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Books = %d\n", books);
                break;

            case 2:
                if(books > 0)
                {
                    books--;
                    printf("Book Issued Successfully!\n");
                }
                else
                {
                    printf("No Books Available!\n");
                }
                break;

            case 3:
                books++;
                printf("Book Returned Successfully!\n");
                break;

            case 4:
                printf("Thank You for Using Library Management System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}