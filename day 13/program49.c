#include<stdio.h>
int main(){
    int n;
    int i;
    printf("enter the number of elements:");
    scanf("%d", &n);

    int arr[n];

    printf("enter %d elements :\n", n);
    for(i = 0; i < n; i++){
        printf("element %d:",i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n The elements in th array are:");
    for(i = 0; i < n ; i++){
        printf("%d",arr[i]);

    }
    printf("\n");
    return 0;
}