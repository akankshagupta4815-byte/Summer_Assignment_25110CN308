#include <stdio.h>

int main() {
    int a[100], n, i, first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    first = second = -1;

    for(i = 0; i < n; i++) {
        if(a[i] > first) {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    printf("Second largest element = %d", second);

    return 0;
}