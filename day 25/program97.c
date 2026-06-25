#include <stdio.h>

int main()
{
    int a[20], n1, n2, i, j, temp;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements: ");
    for(i = n1; i < n1 + n2; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n1 + n2 - 1; i++)
        for(j = i + 1; j < n1 + n2; j++)
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    printf("Merged Array: ");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", a[i]);

    return 0;
}