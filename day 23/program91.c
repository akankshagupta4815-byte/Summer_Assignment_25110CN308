#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1, count2, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        count1 = count2 = 0;

        for(j = 0; str1[j] != '\0'; j++)
        {
            if(str1[i] == str1[j])
                count1++;

            if(str1[i] == str2[j])
                count2++;
        }

        if(count1 != count2)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Anagram String");
    else
        printf("Not Anagram String");

    return 0;
}