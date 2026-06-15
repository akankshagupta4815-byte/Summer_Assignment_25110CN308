#include<stdio.h>
int main(){
    int n;
    int i;
    int evencount = 0;
    int oddcount = 0;


    printf("enter the number of element:");
    scanf("%d", &n);
    int arr[n];

    printf("enter %d elements:\n", n);
    for(i = 0; i < n;i++){
        printf("element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] % 2 ==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("\nTotal number of even elements = %d\n", evencount);
    printf("Total number of odd elements = %d\n", oddcount);
    return 0;
    


}