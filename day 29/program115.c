#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    gets(str);

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Convert to Uppercase\n");
        printf("3. Convert to Lowercase\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase String = %s\n", str);
                break;

            case 3:
                for(int i = 0; str[i] != '\0'; i++)
                {
                    if(str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                printf("Lowercase String = %s\n", str);
                break;

            case 4:
            {
                char rev[100];
                int len = strlen(str);

                for(int i = 0; i < len; i++)
                    rev[i] = str[len - i - 1];

                rev[len] = '\0';

                printf("Reversed String = %s\n", rev);
                break;
            }

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}