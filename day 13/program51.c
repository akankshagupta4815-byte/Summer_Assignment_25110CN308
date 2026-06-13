#include<stdio.h>
int main(){
    int n ;
    int i;
    int largest;
    int smallest;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int arr[n];

    printf("enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        printf("element %d: ",i + 1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for(i = 1;i < n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }

        
    }
   printf("\n Largest elements in the array = %d\n", largest);
   printf("Smallest elements in the array = %d\n", smallest);
   return 0;

}