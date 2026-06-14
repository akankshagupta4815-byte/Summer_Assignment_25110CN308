#include <stdio.h>

int main() {
    int a[5], i, key;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++) {
        if(a[i] == key) {
            printf("Found at position %d", i + 1);
            return 0;
        }
    }

    printf("Not found");
    return 0;
}
