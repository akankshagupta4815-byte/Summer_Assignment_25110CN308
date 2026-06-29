#include <stdio.h>

int main()
{
    int stock = 100;
    int choice, quantity;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Stock\n");
        printf("2. Sell Item\n");
        printf("3. Check Stock\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter quantity to add: ");
                scanf("%d", &quantity);
                stock += quantity;
                printf("Stock Added Successfully!\n");
                break;

            case 2:
                printf("Enter quantity to sell: ");
                scanf("%d", &quantity);

                if(quantity <= stock)
                {
                    stock -= quantity;
                    printf("Item Sold Successfully!\n");
                }
                else
                {
                    printf("Insufficient Stock!\n");
                }
                break;

            case 3:
                printf("Current Stock = %d\n", stock);
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}