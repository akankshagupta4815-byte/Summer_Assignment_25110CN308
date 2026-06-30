#include <stdio.h>

int main()
{
    int n, i;
    char book[20][50];
    char author[20][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book Name: ");
        scanf("%s", book[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    // Display book details
    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book Name   : %s\n", book[i]);
        printf("Author Name : %s\n", author[i]);
    }

    return 0;
}