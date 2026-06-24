#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[50];
    int i, len = 0, max = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;

                strncpy(longest, &str[i - len], len);
                longest[len] = '\0';
            }

            len = 0;

            if(str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    printf("Longest word: %s", longest);

    return 0;
}