#include <stdio.h>

int main()
{
    int choice;
    int seats = 50, tickets;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Check Available Seats\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Seats = %d\n", seats);
                break;

            case 2:
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);

                if(tickets <= seats)
                {
                    seats -= tickets;
                    printf("%d Ticket(s) Booked Successfully!\n", tickets);
                }
                else
                {
                    printf("Not Enough Seats Available!\n");
                }
                break;

            case 3:
                printf("Thank You for Using Ticket Booking System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}